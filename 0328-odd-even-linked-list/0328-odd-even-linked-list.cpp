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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* temp = head;
        int mark = 1;
        queue<int> odd;
        queue<int> even;

        while(temp != nullptr){
            if(mark == 0){
                even.push(temp->val);
                temp = temp->next;
                mark = 1;
            }
            else{
                odd.push(temp->val);
                temp = temp->next;
                mark = 0;
            }
        }

        temp = head;
        while(!odd.empty()){
            temp->val = odd.front();
            odd.pop();
            temp = temp->next;
        }
        while(!even.empty()){
            temp->val = even.front();
            even.pop();
            temp = temp->next;
        }
        return head;
    }
};