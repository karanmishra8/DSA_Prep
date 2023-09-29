#include <iostream>
using namespace std;
int main() {
    int arr[]={3,4,5,4,5,6,1,6,1};
    int n=9;
    int ans=arr[0];
    for(int i=1;i<n;i++)
    {
       ans=arr[i]^ans;
        
    }
    cout<<ans;
    return 0;
}