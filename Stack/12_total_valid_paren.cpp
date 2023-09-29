#include<iostream>
#include<stack>
using namespace std;
int main()
{
string str="()(()";
stack<int>s;
int count=0;
for(int i=0;i<str.size();i++)
{
    char ch=str[i];
    if(ch=='(')
    {
        s.push(ch);
    }
    else if(s.empty())
        {
         s.push(ch);
        }
        else if(s.top()=='('){
          s.pop();
          count++;
        }
    
}
    cout<<count*2;
    return 0;

    }
