int widthOfBinaryTree(TreeNode* root) {
    if(!root)return 0;
    queue<pair<TreeNode*,long long>>q;//{node,val}
    q.push({root,1ll});
    int ans=1;
    while(q.size()){
        long long mn,mx;
        mn=q.front().second;
        mx=INT_MIN;
        for(int i=q.size();i>0;i--){
            auto get=q.front();
            q.pop();
            mx=get.second-mn;//if not subtract then it will exceed
            auto node=get.first;
            if(node->left){
                q.push({node->left,2*mx+1});
            }
            if(node->right){
                q.push({node->right,2*mx+2});
            }
        }
        ans=max(ans,(int)(mx+1));
    }
    return ans;

}
