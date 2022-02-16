ListNode* swapPairs(ListNode* head) {
    ListNode* root=head;
    while(root&&root->next){//bhai root aur agla ho tbhi to swap kroge
        swap(root->val,root->next->val);
        root=root->next->next;
    }
    return head;
}
