//same fake node technique
ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode fake(0),*pre=&fake;
    int extra=0;
    while(l1||l2||extra){
        int tot=0;
        tot=extra;
        if(l1){
            tot+=l1->val;
            l1=l1->next;
        }
        if(l2){
            tot+=l2->val;
            l2=l2->next;
        }
        pre->next=new ListNode(tot%10);
        pre=pre->next;
        extra=tot/10;
    }
    return fake.next;
}
