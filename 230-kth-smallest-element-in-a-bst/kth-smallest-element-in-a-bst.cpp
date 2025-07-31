/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void fill(TreeNode* root, vector<int>& vec){
        if(root==NULL) return;
        fill(root->left,vec);
        vec.push_back(root->val);
        fill(root->right,vec);
    }

    int kthSmallest(TreeNode* root, int k) {
        vector<int> vec;
        fill(root,vec);

        return vec[k-1];
    }
};