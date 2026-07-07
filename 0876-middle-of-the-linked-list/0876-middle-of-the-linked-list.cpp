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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int length = 0;
        while(temp != NULL){
            length++;
            temp = temp->next;
        }
        int mididx = (length/2) +1 ;
        ListNode* mid = head;
       while(mid != NULL){
        mididx = mididx - 1;
        if(mididx == 0 ) break;
            mid = mid->next;
        }
        return mid;
    }
};