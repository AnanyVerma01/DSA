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
    void recur(TreeNode* root, string str, vector<string>& res){
        if(root->left==NULL && root->right==NULL){
            res.push_back(str+to_string(root->val));
        }
        if(root->left) recur(root->left,str+to_string(root->val)+"->",res);
        if(root->right) recur(root->right,str+to_string(root->val)+"->",res);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;

        if(root){
            recur(root,"",res);
        }

        return res;
    }
};