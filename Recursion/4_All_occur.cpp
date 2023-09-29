#include <iostream>
#include<vector>
using namespace std;
void all_occur(int arr[],int i,int n,int target,vector<int> &v)
{
    if(i==n)
    {
        return;
    }
    if(arr[i]==target)
    {
        v.push_back(i);
    }
    all_occur(arr,i+1,n,target,v);
}
int main() {
    int arr[]={3,1,3,6,7,3};
    int i=0,n=6,target=3;
    vector<int>v;
    all_occur(arr,i,n,target,v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}