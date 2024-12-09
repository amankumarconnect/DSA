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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        while(temp->next!=NULL){
            ListNode* temp2 = temp->next;
            ListNode* gcdnode = new ListNode(__gcd(temp->val, temp2->val));
            temp->next = gcdnode;
            gcdnode->next = temp2;
            temp = gcdnode->next;
        }
        return head;
    }
};
