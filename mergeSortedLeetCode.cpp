class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
          int first = m-1, second = n-1, third = m+n-1;

    while(second >= 0){
        if(first >= 0){
            if(nums1[first] <= nums2[second]) nums1[third--] = nums2[second--];
            else if(nums1[first] > nums2[second]) nums1[third--] = nums1[first--];
        } 
        else nums1[third--] = nums2[second--];
    }
    }
}