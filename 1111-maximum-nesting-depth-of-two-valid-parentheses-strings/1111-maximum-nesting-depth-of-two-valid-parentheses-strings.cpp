#include <vector>
#include <string>

class Solution {
public:
    std::vector<int> maxDepthAfterSplit(std::string seq) {
        std::vector<int> ans(seq.length());
        int depth = 0;

        for (int i = 0; i < seq.length(); ++i) {
            if (seq[i] == '(') {
                ans[i] = depth % 2;
                depth++;
            } else {
                depth--;
                ans[i] = depth % 2;
            }
        }

        return ans;
    }
};