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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> visited;
        for(ListNode* a = headA; a!=NULL; a=a->next){
            visited.insert(a);
        }
        for(ListNode* b = headB; b!=NULL; b=b->next){
            if(visited.count(b)){
                return b;
            }
        }
        return nullptr;
    }
};