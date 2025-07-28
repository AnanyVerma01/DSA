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
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*> q;
        int childnum=0;
        q.push(root);

        while(!q.empty()){

            int size = q.size();
            
            for(int i=0;i<size;i++){

                TreeNode* temp = q.front();
                q.pop();

                int parentnum=0;

                if(temp->left){
                    if(temp->left->val==x || temp->left->val==y){
                        childnum++;
                        parentnum++;
                    } 
                    q.push(temp->left);
                }
                if(temp->right){
                    if(temp->right->val==x || temp->right->val==y){
                        childnum++;
                        parentnum++;
                    }
                    q.push(temp->right);
                }
                if(parentnum==2) return false;
            }

            if(childnum==2){
                return true;
            }
            if(childnum==1){
                return false;
            }

        }

        return false;
    }
};