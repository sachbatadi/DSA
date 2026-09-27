class Solution {
public:
    string reverseParentheses(string s) {
        vector<int> opened;
        string res;
        
        for (char c : s) {
            if (c == '(') {
                opened.push_back(res.length());
            } else if (c == ')') {
                int start = opened.back();
                opened.pop_back();
                reverse(res.begin() + start, res.end());
            } else {
                res.push_back(c);
            }
        }
        
        return res;
    }
};