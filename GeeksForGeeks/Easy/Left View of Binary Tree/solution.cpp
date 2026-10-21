/* Structure of Binary Tree Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
    private:
        void solve(Node* root, vector<int>& arr, int l) {
            if (root == NULL) {
                return;
            }
            if (l == arr.size()) {
                arr.push_back(root->data);
            }
            solve(root->left, arr, l + 1);
            solve(root->right, arr, l + 1);
        }

    public:
        vector<int> leftView(Node* root) {
            vector<int> arr;
            solve(root, arr, 0);
            return arr;
        }
};