// Time complexity:
// O(n)

// Space complexity:
// O(n)

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>stk;
        stk.push(s[0]);
        for(int i = 1 ; i < s.size() ; i++ ){
            if(!stk.empty() && stk.top()==s[i]) stk.pop();
            else stk.push(s[i]);
        }
        s = "";
        while(!stk.empty()){
            s+=stk.top();
            stk.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};