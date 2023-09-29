#include<iostream>
#include<stack>
using namespace std;
void remove(string &str)
{
    stack<int>s;
    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
            if(!s.empty() && s.top()==ch)
            {
                s.pop();
            }
            else{
                s.push(ch);
            }
    }
    string ans;
    while(!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    cout<<ans;
}
int main()
{
string str="karrakl";
remove(str);
    return 0;
}