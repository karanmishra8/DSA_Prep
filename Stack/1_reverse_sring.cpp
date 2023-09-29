#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<char>s;
    string str="karan";
    for(int i=0;i<str.size();i++)
    {
        char ch=str[i];
        s.push(ch);
    }
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
while(!s.empty())
{
    cout<<s.top()<<" ";
    s.pop();
}
    return 0;
}