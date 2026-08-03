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
        ListNode* tempA = headA;
        ListNode* tempB = headB;

        int lengthA = 0;
        int lengthB = 0;
        while(tempA != NULL){
            lengthA++;
            tempA = tempA->next;
        }
         while(tempB != NULL){
            lengthB++;
            tempB = tempB->next;
        }
        tempA = headA;
        tempB = headB;
        
        if(lengthA > lengthB){
            int difference = lengthA - lengthB;
            for(int i = 0;i < difference;i++){
                tempA = tempA->next;
            }
            while(tempA != tempB){
                tempA = tempA->next;
                tempB = tempB->next;
            }
            return tempA;
        }
        else{
             int difference = lengthB - lengthA;
            for(int i = 0;i < difference;i++){
                tempB = tempB->next;
            }
            while(tempA != tempB){
                tempA = tempA->next;
                tempB = tempB->next;
            }
            return tempB;
        }
    }
};