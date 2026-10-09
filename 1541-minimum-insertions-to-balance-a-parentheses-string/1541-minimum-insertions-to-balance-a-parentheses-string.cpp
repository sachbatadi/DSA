class Solution {
public:
    int minInsertions(string s) {
        int insertions = 0;
        int neededRight = 0;
        
        for (char c : s) {
            if (c == '(') {
                neededRight += 2;
                if (neededRight % 2 != 0) {
                    insertions++;
                    neededRight--;
                }
            } else {
                neededRight--;
                if (neededRight < 0) {
                    insertions++;
                    neededRight += 2;
                }
            }
        }
        
        return insertions + neededRight;
    }
};