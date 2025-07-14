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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        int currSum = 0;
        vector<int> v;
        vector<vector<int>> res;

        if(!root) return res;
        
        recur(root,targetSum,currSum,v,res);

        return res;
    }

    void recur(TreeNode* root, int targetSum, int currSum, vector<int>& v, vector<vector<int>>& res) {
        if(!root){
            return;
        }

        currSum+=root->val;
        v.push_back(root->val);

        if(!root->left && !root->right && currSum==targetSum){
            res.push_back(v);
        }

        recur(root->left,targetSum,currSum,v,res);
        recur(root->right,targetSum,currSum,v,res);

        v.pop_back();
    }
};