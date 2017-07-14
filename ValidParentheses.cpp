class Solution {
public:
  bool isValid(string s) {
        stack<char> st;  
        size_t i = 0;  
        char m,n;  
        while(i != s.length())  
        {  
            n= s[i];  
            if (n!= ')'&&n!= '}'&&n!= ']')  
            {  
                st.push(n);  
            }  
            else  
            {  
                if (st.size() == 0)  
                   return false;  
  
                m= st.top();  
                switch(n)  
                {  
                case ')':  
                    if (m== '(')  
                      st.pop();  
                    else   
                      return false;  
                    break;  
                        
                case '}':  
                    if (m== '{')  
                      st.pop();  
                    else   
                      return false;  
                    break;  
                      
                case ']':  
                    if (m== '[')  
                      st.pop();  
                    else   
                      return false;  
                    break;  
                }  
            }  
            ++i;  
        }  
        if (st.size() == 0)  
           return true;  
        else return false;  
    }  
};
