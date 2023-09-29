#include <iostream>
#include<unordered_map>
using namespace std;
bool twosum(int arr[],int n,int target)
{
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int element=arr[i];
        int more=target-element;
        if(mp.find(more)!=mp.end())
        {
            return true;
        }
        mp[element]=i;
    }
    return false;
}
int main() {
   int arr[]={5,2,1,3,7};
   int n=sizeof(arr)/sizeof(arr[0]);
    cout<<twosum(arr,n,9);
    return 0;
}