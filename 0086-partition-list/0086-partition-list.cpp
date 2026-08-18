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
    ListNode* partition(ListNode* head, int x) {
        ListNode* lessDummy = new ListNode(-1);
        ListNode* geqDummy = new ListNode(-1);

        ListNode* lessTail = lessDummy;
        ListNode* geqTail = geqDummy;

        ListNode* temp = head;

        while(temp != nullptr){
            if(temp->val < x){
                lessTail->next = temp;
                lessTail = lessTail->next;
            }
            else{
                geqTail->next = temp;
                geqTail = geqTail->next;
            }
            temp = temp->next;
            
            lessTail->next = geqDummy->next;
            geqTail->next = nullptr;
        }
        return lessDummy->next;
    }
};