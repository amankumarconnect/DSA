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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> vecs;
        ListNode* temp = head;
        while(temp){
            vecs.push_back(temp->val);
            temp = temp->next;
        }
        temp = head;
        int count = 0;
        int count2 = 0;
        while(temp){
            count++;
            if(left<=count&&count<=right){
                count2++;
                temp->val = vecs[right-count2];
            }
            temp=temp->next;
        }
        return head;
    }
};
