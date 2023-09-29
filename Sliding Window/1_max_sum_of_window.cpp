#include<iostream>
using namespace std;
int maxsum(int arr[],int k,int size)
{
    int sum=0;
    int maxsum=-999;
    int i=0,j=0;
    while(j<size)
    {
        sum=sum+arr[j];
        if(j-i+1<k)
        {
            j++;
        }
        else if(j-i+1==k)
        {
            maxsum=max(sum,maxsum);
            sum=sum-arr[i];
            i++;
            j++;
        }
    }
    return maxsum;
}
int main()
{
    int arr[]={4,5,-3,7,8,9,6};
    int k=3;
    int size= sizeof(arr)/sizeof(arr[0]);
    cout<<maxsum(arr,k,size);
    return 0;
}