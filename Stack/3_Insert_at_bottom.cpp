#include<iostream>
#include<stack>
using namespace std;
 void bottom(stack<int>&s,int total_size,int target)
 {
    if(s.empty())
    {
        s.push(target);
        return;
    }
    int temp=s.top();
    s.pop();
    bottom(s,total_size,target);
    s.push(temp);
 }
int main()
{
stack<int>s;
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);
int size=s.size();
bottom(s,size,99);
while(!s.empty())
{
    cout<<s.top()<<" ";
    s.pop();
}
    return 0;
}