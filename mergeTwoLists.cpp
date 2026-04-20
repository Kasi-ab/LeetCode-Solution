class Solution {
public:
   ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;
        ListNode* dummy = new ListNode(0); 
        ListNode* curr3 = dummy;  
        while(curr1!=NULL&&curr2!=NULL){
              if(curr1->val<=curr2->val){
                  curr3->next = curr1;
                  curr1 = curr1->next;
                  curr3 = curr3->next;
               }else{
                  curr3->next = curr2;
                  curr2 = curr2->next;
                  curr3 = curr3->next;
               }
        }
        if(curr1!=NULL){
           curr3->next = curr1;
        }
        if(curr2!=NULL){
           curr3->next = curr2;
        }
        return dummy->next;   
    }
};
