class Solution {
public:
    void reorderList(ListNode* head) {
        vector<int> v;
        ListNode* temp = head;

        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }

        int j = v.size()-1;
        temp=head;
        int i=0,k=0;
        while(i<=j){
            if(k%2!=0){
                temp->val=v[j];
                j--;
            }
            else{
                temp->val=v[i];
                i++;
            }
            k++;
            temp=temp->next;
        }
    }
};