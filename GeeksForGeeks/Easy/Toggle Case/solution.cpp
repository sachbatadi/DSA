class Solution {
  public:
    string toggleCase(string &s) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + ('a' - 'A'); // convert upper to lower
            } else if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] = s[i] - ('a' - 'A'); // convert lower to upper
            }
        }
        return s;
    }
};