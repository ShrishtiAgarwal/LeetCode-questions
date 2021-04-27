/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL){
            return l2;
        }
        if(l2 == NULL){
            return l1;
        }
        ListNode* temp=new ListNode(0);
        ListNode* temp2=temp;
        while(l1 != NULL && l2 != NULL){
            // cout<<temp->val<<endl;
            // cout<<l1->val<<l2->val<<endl;
            if(l1->val > l2->val){
                temp->next = l2;
                l2=l2->next;
                temp=temp->next;
            }
            else{
                temp->next = l1;
                l1=l1->next;
                temp=temp->next;
            }
        }
        if(l1== NULL){
            temp->next = l2;
            return temp2->next;
        }
        if(l2== NULL){
            temp->next = l1;
            return temp2->next;
        }
        return temp2->next;
    }
};