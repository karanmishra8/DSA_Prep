#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int arr[]={2,6,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>temp={0};
    vector<int>temp2={0};
    int sum=0,sum2=0,diff=0;
    sort(arr,arr+n);
    int i=0,j=n-1;
    while(i<=j)
    {
        if((i%2==0) || (i=0) && j%2==1)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else
        {
            i++;
            j--;
        }
        
    }
    for(int i=0;i<n/2;i++)
    {
        temp.push_back(arr[i]);
    }
    for(int i=n/2;i<n;i++)
    {
        temp2.push_back(arr[i]);
    }
    for(int i=0;i<temp.size();i++)
    {
        sum=sum+temp[i];
    }
    for(int i=0;i<temp2.size();i++)
    {
        sum2=sum+temp2[i];
    }
    diff=abs(sum2-sum);
    int mini=min(diff,mini);
    cout<<mini;
    return 0;
}