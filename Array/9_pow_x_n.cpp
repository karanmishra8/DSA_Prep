#include <iostream>
using namespace std;
int pow(int x,int n)
{
    int ans=1;
    for(int i=0;i<n;i++)
    {
        ans=ans*x;
    }
    return ans;
}
int main()
{
    int x=2,n=5;
    cout<<pow(x,n);
}
