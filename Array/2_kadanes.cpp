#include <iostream>
using namespace std;
int main() {
   int arr[]={2,-9,9,-1,-8,3};
   int n=sizeof(arr)/sizeof(arr[0]);
   int sum=0,maxy=arr[0];
   for(int i=0;i<n;i++)
   {
       sum=sum+arr[i];
       maxy=max(sum,maxy);
       if(sum<0)
       {
           sum=0;
       }
   }
   cout<<maxy;
    return 0;
}