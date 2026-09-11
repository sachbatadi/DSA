class Solution {
public:
    bool isPalindrome(string st) {
        int s = 0;
        int e = st.length() - 1;

        while (s < e) {
            while (s < e && !isalnum(st[s])) {
                s++;
            }
            while (s < e && !isalnum(st[e])) {
                e--;
            }

            if (tolower(st[s]) != tolower(st[e])) {
                return false;
            }
            s++;
            e--;
        }

        return true;
    }
};