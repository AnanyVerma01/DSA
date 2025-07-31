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
    void fill(TreeNode* root, set<int>& set){
        if(root==nullptr) return;
        fill(root->left,set);
        set.insert(root->val);
        fill(root->right,set);
    }
    int findSecondMinimumValue(TreeNode* root) {
        set<int> set;
        fill(root,set);
        vector<int> v(set.begin(), set.end());

        if(v.size()<2) return -1;
        return v[1];
    }
};