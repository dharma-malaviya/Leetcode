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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return nullptr;
        }

        int  count = 0;
        ListNode* temp = head;
        ListNode* prev = nullptr;
        while(temp != nullptr){
            count++;
            temp = temp->next;
        }
        int mid = (count/2)+1;

        temp = head;
        for(int i=1; i<mid; i++){
            if(i == mid-1){
                prev = temp;
            }
            temp = temp->next;
        }
        prev->next = temp->next;
        temp->next = nullptr;
        delete temp;
        return head;
    }
};