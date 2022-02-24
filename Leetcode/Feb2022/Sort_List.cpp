//o(nlogn) for o(n^2) use insertion sort
ListNode* merge(ListNode* a,ListNode* b){
    if(!a)return (b);
    if(!b)return (a);
    ListNode* result=nullptr;
    if(a->val<=b->val){
        result=a;
        result->next=merge(a->next,b);
    }
    else{
        result=b;
        result->next=merge(a,b->next);
    }
    return result;
}
ListNode* sortList(ListNode* head) {
    if(head==NULL||head->next==NULL)return head;//if a single element or null
    ListNode* slow=head,*fast=head,*temp;
    //hare tortoise method
    while(fast&&fast->next){
        temp=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    // after mid pt null
    temp->next=NULL;
    //sort left part
    ListNode* left=sortList(head);
    //sort right part
    ListNode* right=sortList(slow);
    //merge and store it in head
    head=merge(left,right);
    return head;
}
