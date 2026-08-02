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

    ListNode* reverseList(ListNode* head){
        ListNode* prev = nullptr;
        ListNode* temp = head;
        while(temp){
            ListNode* nextNode = temp->next;
            temp->next = prev;
            prev = temp;
            temp = nextNode;
        }
        return prev;
    }

    ListNode* getKthNode(ListNode* temp, int k){
        k--;
        while(temp != nullptr && k>0){
            temp = temp->next;
            k--;
        }
        return temp;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevLast = nullptr;

        while(temp){
            ListNode* kthNode = getKthNode(temp, k);

            // Less than k nodes remaining
            if(kthNode == NULL){
                if(prevLast != NULL){
                    prevLast->next = temp;
                }
                break;
            }

            // Save next group's starting node
            ListNode* nextNode = kthNode->next;

            // Detach current group
            kthNode->next = nullptr;

            // Reverse current group
            ListNode* newHead = reverseList(temp);

            // Connect previous group
            if(temp == head){
                head = newHead;
            }
            else{
                prevLast->next = newHead;
            }

            // temp becomes the last node after reversal
            prevLast = temp;

            // Move to next group
            temp = nextNode;
        }
        return head;
    }
};