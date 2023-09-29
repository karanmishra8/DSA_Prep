#include <iostream>
using namespace std;
int main() {
    int arr[]={3,1,5,6,12,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int minSoFar=arr[0],profit=0,maxProfit=0;
    for(int i=0;i<n;i++)
    {
        minSoFar=min(minSoFar,arr[i]);
        profit=arr[i]-minSoFar;
        maxProfit=max(profit,maxProfit);
    }
    cout<<maxProfit;
    return 0;
}