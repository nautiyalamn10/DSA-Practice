ListNode* deleteDuplicates(ListNode* head) {
    ListNode fake(0),*ptr=&fake;
    if(!head||!head->next)return head;
    int prev=-1;
    map<int,int>mp;
    while(head){
        mp[head->val]++;head=head->next;
    }
    for(auto i:mp){
        if(i.second==1){
            ptr->next=new   ListNode(i.first);
            ptr=ptr->next;
        }
    }
    return fake.next;
}
