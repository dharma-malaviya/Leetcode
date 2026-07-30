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
    bool isPalindrome(ListNode* head) {
        stack<int> st;
        int cnt = 0;
        ListNode* temp = head;
        while(temp != NULL){
            cnt++;
            temp = temp->next;
        }
        temp = head;

        for(int i=0; i<cnt/2; i++){
            st.push(temp->val);
            temp = temp->next;
        }
        if(cnt%2 != 0){
            temp = temp->next;
        }

        while(temp != NULL){
            if(st.top() != temp->val){
                return false;
            }
            temp = temp->next;
            st.pop();
        }
        return true;
    }
};