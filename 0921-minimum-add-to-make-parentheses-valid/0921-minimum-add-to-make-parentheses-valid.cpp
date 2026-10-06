class Solution {
public:
    int minAddToMakeValid(string s) {
        int open_count = 0;
        int add_count = 0;

        for (char c : s) {
            if (c == '(') {
                open_count++;
            } else {
                if (open_count > 0) {
                    open_count--;
                } else {
                    add_count++;
                }
            }
        }

        return open_count + add_count;
    }
};