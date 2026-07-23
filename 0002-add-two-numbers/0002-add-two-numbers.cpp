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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        string num1 = "", num2 = "";
        while(l1){
            num1 = char('0' + l1->val) + num1;
            l1 = l1->next;
        }
        while(l2){
            num2 = char('0' + l2->val) + num2;
            l2 = l2->next;
        }

        string result = "";
        int i = num1.size()-1, j = num2.size()-1, carry = 0;
        while(i>=0 || j>=0 || carry != 0){
            int d1 = (i>=0) ? num1[i--] - '0' : 0;
            int d2 = (j>=0) ? num2[j--] - '0' : 0;
            int sum = d1 + d2 + carry;

            carry = sum/10;
            result += char('0' + sum%10);
        }

        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;
        for(char c : result){
            temp->next = new ListNode(c - '0');
            temp = temp->next;
        }
        return dummy->next;
    }
};