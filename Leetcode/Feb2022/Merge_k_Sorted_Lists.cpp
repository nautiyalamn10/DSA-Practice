ListNode* mergeKLists(vector<ListNode*>& lists) {
    priority_queue<int,vector<int>,greater<int>>pq;
    for(auto list:lists){
        auto head =list;
        while(head){
            pq.push(head->val);
            head=head->next;
        }
    }
    ListNode fake(-1);
    ListNode *ptr=&fake;
    while(pq.size()){
        ptr->next=new ListNode(pq.top());
        pq.pop();
        ptr=ptr->next;
    }
    return fake.next;
}
//fake node concept 
//Errichto video merge two list
