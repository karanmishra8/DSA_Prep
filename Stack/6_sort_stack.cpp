#include<iostream>
#include<stack>
using namespace std;
void inserted_sorted(stack<int>&s,int target)
{
    if(s.empty())
    {
        s.push(target);
        return;
    }
    if(s.top()>=target)
    {
        s.push(target);
        return;
    }
    int temp=s.top();
    s.pop();
    inserted_sorted(s,target);
    s.push(temp);
}
void sortstack(stack<int>&s)
{
    if(s.empty())
    {
        return;
    }
    int temp=s.top();
    s.pop();
    sortstack(s);
    inserted_sorted(s,temp);
}
using namespace std;
int main()
{
stack <int> s;
s.push(2);
s.push(5);
s.push(1);
s.push(9);
s.push(3);
s.push(6);
sortstack(s);
while(!s.empty())
{
    cout<<s.top();
    s.pop();
}
    return 0;
}