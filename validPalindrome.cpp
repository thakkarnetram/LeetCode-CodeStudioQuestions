class Solution {
public:
    bool isPalindrome(string s) {
        int start = size(s);
        if(start ==1 ) return true;
        string str = "";
        for(int i = 0; i<start;i++){
            if(isalnum(s[i])) str += s[i];
        }
        transform(str.begin(),str.end(),str.begin(), ::toupper);
        int i = 0;  
        int j=size(str)-1;
        while(i<j){
            if(str[i]!=str[j]) return false;
                i++,j--;
        }   
        return true;
    }
};