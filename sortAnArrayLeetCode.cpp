#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int start, int end)
{
    int mid = start + (end - start) / 2;

    int length1 = mid - start + 1;
    int length2 = end - mid;

    int *arr1 = new int[length1];
    int *arr2 = new int[length2];

    // copying values for arr1
    int mainArrayIndex = start;
    for (int i = 0; i < length1; i++)
    {
        arr1[i] = arr[mainArrayIndex++];
    }

    // copying values for arr2
    mainArrayIndex = mid + 1;
    for (int i = 0; i < length2; i++)
    {
        arr2[i] = arr[mainArrayIndex++];
    }

    // now merge both the arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;
    while (index1 < length1 && index2 < length2)
    {
        if (arr1[index1] < arr2[index2])
        {
            arr[mainArrayIndex++] = arr1[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = arr2[index2++];
        }
    }

    while (index1 < length1)
    {
        arr[mainArrayIndex++] = arr1[index1++];
    }

    while (index2 < length2)
    {
        arr[mainArrayIndex++] = arr2[index2++];
    }

    // delete the dynamically allocated arrays
    delete[] arr1;
    delete[] arr2;
}

void mergeSort(vector<int> &arr, int start, int end)
{
    // base case
    if (start >= end)
        return;

    // finding mid
    int mid = start + (end - start) / 2;

    // sorting left part
    mergeSort(arr, start, mid);

    // sorting right part
    mergeSort(arr, mid + 1, end);

    // merging both arrays
    merge(arr, start, end);
}

int main()
{
    vector<int> v;
    int size;
    cin >> size;

    // taking input of vector
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    // calling the mergeSort Function
    mergeSort(v, 0, size - 1);

    // printing the sorted array
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}