#include <iostream>
using namespace std;
int fact(int n)
{
    int fac=1;
    for(int i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    return fac;
}
int ncr(int n,int r)
{
    int num = fact(n);
    int dem=fact(r)*fact(n-r);
    return num/dem;
}
int main() {
    int n=10;
   int k= ncr(10,4);
    cout<<k;

    return 0;
}