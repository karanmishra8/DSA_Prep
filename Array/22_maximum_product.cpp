#include <iostream>
using namespace std;
int max_pro(int arr[],int n)
{
    int pre_sum=1;
    int suf_sum=1;
    int ans=-99999;
    for(int i=0;i<n;i++)
    {
        if(pre_sum==0) pre_sum=1;
        if(suf_sum==0) suf_sum=1;
        pre_sum=pre_sum*arr[i];
        suf_sum=suf_sum*arr[n-i-1];
        ans=max(ans,max(pre_sum,suf_sum));
       
    }
    return ans;
}
int main() {
    int arr[]={1,2,3,-3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<max_pro(arr,n);

    return 0;
}