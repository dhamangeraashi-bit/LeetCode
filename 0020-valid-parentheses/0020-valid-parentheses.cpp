class Solution {
public:
    bool isValid(string s) {
        // we need to use stack in this kind of a program 
        stack <char> st;
        for(char ch:s)
        {
            if(ch=='(' || ch=='{' || ch=='['){
                st.push(ch);}
                else
                {
                    if(st.empty())
                    return false;
                    if((ch==')' && st.top()!='(') || (ch=='}' && st.top()!='{') || (ch==']' && st.top()!='['))
                    return false;
                    st.pop();
                }
                
            
        } return st.empty();
    }
};