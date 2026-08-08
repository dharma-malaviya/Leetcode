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

    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* temp = head;
        while(temp != NULL){
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head || !head->next || left==right){
            return head;
        }

        ListNode* temp = head;
        ListNode* beforeL = NULL;
        ListNode* leftNode = NULL;
        ListNode* rightNode = NULL;
        ListNode* afterR = NULL;
        int pos=1;

        while(temp!=NULL){
            if(pos == left){
                leftNode = temp;
            }

            if(pos == right){
                rightNode = temp;
                afterR = temp->next;
            }
            
            if(pos == left-1){
                beforeL = temp;
            }
            temp = temp->next;
            pos++;
        }
        rightNode->next = NULL;
        ListNode* newHead = reverse(leftNode);
        if(beforeL!=NULL){
            beforeL->next = newHead;
        }
        else{
            head = newHead;
        }

        leftNode->next = afterR;
        return head;
    }
};