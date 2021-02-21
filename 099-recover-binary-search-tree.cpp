struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int _val) : val(_val), left(nullptr), right(nullptr) {}
    TreeNode(int _val, TreeNode* _left, TreeNode* _right) : val(_val), left(_left), right(_right) {}
};

#include <iostream>
using namespace std;

class Solution {
private:
    TreeNode *prev, *a, *b;
public:
    void recoverTree(TreeNode* root) {
        prev = new TreeNode(INT32_MIN);
        auto p = prev;

        recursion(root);
        swap(a->val, b->val);

        delete p;
    }
private:
    void recursion(TreeNode* root) {
        if (root == nullptr) {
            return;
        }

        recursion(root->left);

        if (a == nullptr && prev->val > root->val) {
            a = prev;
        }
        if (a != nullptr && prev->val > root->val) {
            b = root;
        }
        prev = root;
        
        recursion(root->right);
    }
};

int main()
{
    cout << INT32_MIN << endl;
    cout << INT32_MAX << endl;
    cout << INT64_MIN << endl;
    cout << INT64_MAX << endl;
    return 0;
}
