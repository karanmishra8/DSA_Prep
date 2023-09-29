#include <iostream>
using namespace std;
int main() {
    int arr[]={1,22,3,12,4,6,0};
    int n=7,maxi=-1;
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
            cout<<maxi<<" ";
        }
        maxi=max(maxi,arr[i]);
    }
    
    return 0;
}