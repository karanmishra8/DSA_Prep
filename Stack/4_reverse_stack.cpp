#include<iostream>
#include<stack>
using namespace std;
void bottom(stack<int>&s,int totalsize,int data)
{
    if(totalsize==0)
    {
        s.push(data);
        return;
    }
    int temp=s.top();
    s.pop();
    bottom(s,s.size(),data);
    s.push(temp);
}
void reverse(stack<int>&s,int totalsize)
{
    if(s.empty())
    {
        return;
    }
int temp=s.top();
s.pop();
reverse(s,s.size());
bottom(s,s.size(),temp);
}
int main()
{
stack<int>s;
s.push(2);
s.push(3);
s.push(4);
s.push(5);
s.push(6);

reverse(s,s.size());
while(!s.empty())
{
    cout<<s.top()<<" ";
    s.pop();
}
    return 0;
}