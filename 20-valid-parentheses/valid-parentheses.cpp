class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        char a;
        for(int i=0;i<s.size();i++){
            a=s[i];
            if(a=='('||a=='['||a=='{'){
                st.push(a);
            }
            else if(a==')'||a==']'||a=='}'){
                if (st.empty()||(a == ')' && st.top()!='(')||(a ==']' && st.top()!='[')||(a=='}'&& st.top()!='{')) {
                return false;
            }
                st.pop();
            }      
            }
        if(!st.empty()){
                return false;
            }
        else return true;
    }
};