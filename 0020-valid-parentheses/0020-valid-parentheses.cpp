class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        stack <char> stk;
        for(int i =0;i<n;i++ ){
            char ch = s[i];
            if(ch == '{' || ch == '[' || ch == '('){
                stk.push(ch);
            }
            else{
                if(stk.empty()) return false;
                char c=stk.top();
                stk.pop();
                if(ch == '}' && c != '{') return false;
                if(ch == ')' && c != '(') return false;
                if(ch == ']' && c != '[') return false;
            }
        }
        return stk.empty();
    }
};