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
       int length = 0;
       ListNode* temp = head;

// for counting the length of linkedlist
       while(temp!=NULL){
        length++;
        temp = temp->next;
       }
// if n == length of linkedlist
if(n == length){
    head = head->next;
    return head;
}
ListNode* temp1 = head;

for(int i = 1;i < length - n;i++){
    temp1 = temp1->next;
}
temp1->next = temp1->next->next;
return head;
    }
};