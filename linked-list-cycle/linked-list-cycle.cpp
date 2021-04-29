/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL)
            return false;
        ListNode  *first = head;
        ListNode *second = head->next;
        while(first!=NULL){
          
            if(second == NULL || second->next == NULL || second ->next->next == NULL){
                return false;
            }
            if(second == first){
                return true;
            }
              first = first->next;
            second = second->next->next;
        }
        return false;
    }
};