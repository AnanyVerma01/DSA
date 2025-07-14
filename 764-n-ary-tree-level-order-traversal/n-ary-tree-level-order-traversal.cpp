/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        queue<Node*> queue;

        if(root==NULL){
            return ans;
        }

        queue.push(root);

        while(!queue.empty()){
            int size = queue.size();
            vector<int> curr;
            while(size>0){
                Node* temp = queue.front();
                curr.push_back(temp->val);
                queue.pop();
                for(Node* i : temp->children){
                    if(i!=NULL){
                        queue.push(i);
                    }
                }
                size--;
            }
            ans.push_back(curr);
        }

        return ans;
    }
};