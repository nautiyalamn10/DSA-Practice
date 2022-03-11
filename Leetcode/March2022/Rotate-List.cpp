ListNode* rotateRight(ListNode* head, int k) {
    int totalNode=0;
    if(!head||!head->next)return head;
    ListNode* t=head;
    while(t){
        t=t->next;
        totalNode+=1;
    }
    t=head;
    int f=totalNode-(k%totalNode);
    if(!f||f==totalNode)return head;
    for(int i=1;i<f;i++){
        head=head->next;
    }
    ListNode fake(0),*ptr=&fake;
    ptr->next=head->next;
    ptr=ptr->next;
    head->next=NULL;
    while(ptr->next){
        ptr=ptr->next;
    }
    ptr->next=t;

    return fake.next;
}
