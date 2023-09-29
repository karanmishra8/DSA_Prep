#include<iostream>
using namespace std;
bool prime(int x)
{
for(int i=2;i<x/2;i++)
    {
        if(x%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int x=5;
    cout<<prime(x);
    
}