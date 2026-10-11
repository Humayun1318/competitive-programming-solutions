#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

vector<int> v;

vector<int> inorderTraversal(TreeNode *root)
{
    v.clear();

    if (root == nullptr)
    {
        return v;
    }

    inorderTraversalHelper(root);

    return v;
}
void inorderTraversalHelper(TreeNode *root)
{
    if (root == nullptr)
    {
        return;
    }

    inorderTraversalHelper(root->left);
    v.push_back(root->val);
    inorderTraversalHelper(root->right);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

  
    return 0;
}