bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
    
    int n=popped.size();
    stack<int>st;int i=0;
        for(int j=0;j<n;j++){
            if(pushed[j]==popped[i]){
                i++;
                // j--;
                while(i<n&&st.size()&&st.top()==popped[i]){
                    i++;st.pop();
                }
            }
            else{
               st.push(pushed[j]); 
            }
        }
    while(i<n&&st.size()&&st.top()==popped[i]){
        st.pop();i++;
    }
    return st.empty();
}
