#include <iostream>
using namespace std;
int equi(int arr[],int n)
{
    int i=0,j=n-1;
    int sum1=arr[i],sum2=arr[j];
    while(i<j)
    {
        if(sum1==sum2)
        {
           return i+1;
        }
        if(sum1<sum2)
        {
            i++;
            sum1=sum1+arr[i];
        }
        else if(sum1>sum2)
        {
            j--;
            sum2=sum2+arr[j];
        }
    }
    return -1;
}
int main() {
    int arr[]={2,1,9,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<equi(arr,n);
    return 0;
}