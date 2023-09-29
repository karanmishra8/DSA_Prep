#include <iostream>
using namespace std;
int largest(int arr[],int n,int k)
{
    int i=0,j=0;
    int sum=0;
    int maxi=0;
    while(j<n)
    {
        sum=sum+arr[j];
        if(sum<k)
        {
            j++;
        }
        else if(sum==k)
        {
           if(j-i+1>maxi);
           {
           maxi=(j-i+1);
           }
           j++;
        }           
        if(sum>k)
        {
            while(sum>=k)
            {
            sum=sum-arr[i];
            i++;
            }
            j++;
        }
   }
    return maxi;
}
int main() {
   int arr[]={-13, 0 ,6, 15, 16, 2 ,15, -12, 17, -16, 0, -3 ,19 ,-3 ,2 ,-9, -6};
   int size=sizeof(arr)/sizeof(arr[0]);
   int k=15;
   cout<<largest(arr,size,k);

    return 0;
}