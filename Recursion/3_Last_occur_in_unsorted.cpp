#include <iostream>
using namespace std;
int last_occur(int arr[],int n,int i,int target)
{
    if(arr[i]==target)
    {
        return i;
    }
    if(i==n)
    {
        return -1;
    }
    last_occur(arr,n,i-1,target);
}
int main() {
    int arr[]={2,1,3,6,7,3};
    int n=6;
    int i=n-1;
    cout<<last_occur(arr,n,i,3);

    return 0;
}