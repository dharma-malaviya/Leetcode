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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == nullptr){
            return nullptr;
        }

        ListNode* temp = head;
        int count = 0;
        while(temp != nullptr){
            count++;
            temp = temp->next;
        }

        int idx = count - n;
        temp = head;

        if(idx == 0){
            ListNode* newHead = head->next;
            head->next = nullptr;
            delete head;
            return newHead;
        }

        for(int i=1; i < idx; i++){
            temp = temp->next;
        }
        ListNode* delNode = temp->next;
        temp->next = temp->next->next;
        delNode->next = nullptr;
        delete delNode;
        return head;
    }
};