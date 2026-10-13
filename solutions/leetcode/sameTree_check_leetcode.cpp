#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool isSameTree(TreeNode *p, TreeNode *q)
{
    if (p == NULL && q == NULL)
    {
        return true;
    }

    if (p == NULL || q == NULL)
    {
        return false;
    }

    if (p->val != q->val)
    {
        return false;
    }

    return isSameTree(p->left, q->left) &&
           isSameTree(p->right, q->right);
}

TreeNode *inputTree()
{
    int x;
    cin >> x;

    if (x == -1)
    {
        return NULL;
    }

    TreeNode *root = new TreeNode(x);

    root->left = inputTree();
    root->right = inputTree();

    return root;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    TreeNode *p = inputTree();
    TreeNode *q = inputTree();

    cout << isSameTree(p, q) << endl;

    return 0;
}