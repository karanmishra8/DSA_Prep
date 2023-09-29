#include <bits/stdc++.h>
using namespace std;
int main() {
  int arr[]={1,3,5,4};
  int n=sizeof(arr)/sizeof(arr[0]),index=-1;
  for(int i=n-2;i>=0;i--)
  {
      if(arr[i]<arr[i+1])
      {
          index=i;
          break;
      }
  }
  if(index==-1)
  {
      reverse(arr,arr+n);
      return -1;
  }
  for(int i=n-1;i>index;i--)
  {
      if(arr[index]<arr[i])
      {
           swap(arr[i],arr[index]);
           break;
      }
  }  
 reverse(arr+index+1,arr+n);
  for(int i=0;i<n;i++)
{
    cout<<arr[i];
}
    return 0;
} 