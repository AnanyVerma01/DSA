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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> map;

        for(int i=0;i<inorder.size();i++){
            map.insert({inorder[i],i});
        }

        int n = preorder.size()-1;
        int m = inorder.size()-1;

        TreeNode* root = construct(preorder,inorder,map,0,n,0,m);
        return root;
    }

    TreeNode* construct(vector<int>& preorder, vector<int>& inorder, map<int,int>& map, int preStart, int preEnd, 
    int inStart, int inEnd){

        if(preStart>preEnd || inStart>inEnd) return NULL;

        int rootData = preorder[preStart];
        int rootInd = map[preorder[preStart]];
        
        TreeNode* root = new TreeNode(rootData);

        int leftSubTree = rootInd - inStart;
        int rightSubTree = inEnd - rootInd;

        root->left = construct(preorder,inorder,map,preStart+1,
        preStart+leftSubTree,inStart,rootInd-1);
        root->right = construct(preorder,inorder,map,preStart+leftSubTree+1,
        preStart+leftSubTree+rightSubTree,rootInd+1,inEnd);

        return root;
    }
};