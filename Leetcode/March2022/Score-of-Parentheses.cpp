int scoreOfParentheses(string S) {
    //-1 for every opening bracket
    stack<int>st;
    for(auto i:S){
        if(i=='('){
            st.push(-1);
        }
        else{
            if(st.top()==-1){
                st.pop();
                st.push(1);
            }
            else{
                int val=0;
                while(st.top()!=-1){
                    val+=st.top();
                    st.pop();
                }
                st.pop();
                st.push(val*2);
            }
        }
    }
    int val=0;
    while(st.size()){
        val+=st.top();
        st.pop();
    }
    return val;
}
