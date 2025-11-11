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
    void dfs(TreeNode* root, int Maxx, int& count){
        if(root==NULL) return;
        if(Maxx<=root->val) count++;
        
        Maxx=max(Maxx,root->val);
        dfs(root->left,Maxx,count);
        dfs(root->right,Maxx,count);
    }

    int goodNodes(TreeNode* root) {
        int count = 0;
        dfs(root,INT_MIN,count);

        return count;
    }
};