ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode fake(0),*ptr=&fake;
    while(list1&&list2){
        if(list1->val<list2->val){
            ptr->next=new ListNode(list1->val);
            ptr=ptr->next;
            list1=list1->next;
        }
        else{
            ptr->next=new ListNode(list2->val);
            ptr=ptr->next;
            list2=list2->next;

        }
    }
    if(list1)ptr->next=list1;
    if(list2)ptr->next=list2;
    return fake.next;
}
