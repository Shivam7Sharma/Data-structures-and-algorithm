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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy= new ListNode();
        ListNode* tail= dummy;
        dummy->next= list1;
        ListNode* curr1= list1;
        ListNode* curr2= list2;
        if(!list1){
            return list2;
        }
        else if(!list2){
            return list1;
        }
        while(tail && tail->next){
            if(curr1->val>=curr2->val){
                tail->next= curr2;
                curr2= curr2->next;
                tail= tail->next;
            }
            else if(curr1->val<curr2->val){
                tail->next=curr1;
                curr1= curr1->next;
                tail= tail->next;         
            }
        }
        if(curr1){
            while(curr1){
                tail->next= curr1;
                curr1= curr1->next;
                tail= tail->next;              
            }
        }
        else{
            while(curr2){
                tail->next= curr2;
                curr2= curr2->next;
                tail= tail->next;              
            }
        }
        return dummy->next;
    }
};