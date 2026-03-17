class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int cnt1=0, cnt11=0, cnt2=0, cnt22=0, cnt33=0, cnt3=0;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='(') cnt1++;
            else if(s[i]==')') cnt11++;
            else if(s[i]=='[') cnt2++;
            else if(s[i]==']') cnt22++;
            else if(s[i]=='{') cnt3++;
            else if(s[i]=='}') cnt33++;

        }

        if(cnt1!=cnt11 || cnt2!=cnt22 || cnt3!=cnt33) return false;
        

        for(int i=0; i<s.size(); i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else{
                if((!st.empty()) && s[i]==')' && st.top()=='('){
                    st.pop();
                }
                else if((!st.empty()) && s[i]=='}' && st.top()=='{'){
                    st.pop();
                }
                else if((!st.empty()) && s[i]==']' && st.top()=='['){
                    st.pop();
                }
            }
        }

        if(st.empty()) return true;
        return false;
    }
};