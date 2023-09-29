#include<iostream>
#include<stack>
using namespace std;
bool valid(string s)
{
    stack<char>st;
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
if(ch=='{' || ch=='(' || ch=='[')
{
st.push(ch);
}
else
{
if(!st.empty())
{
    char ch1=st.top();
    if(ch=='}' && ch1== '{')
    {
      st.pop();
    }
    else if(ch==')' &&  ch1=='(')
    {
        st.pop();
    }
    else if(ch== ']' && ch1=='[')
    {
        st.pop();
    }
    else{
        return false;
    }
}
else {
    return false;
     }
}

}

if(st.empty())
    return true;
else
    return false;

}
int main()
{
string str="{[()]}";
cout<<valid(str);
    return 0;
}