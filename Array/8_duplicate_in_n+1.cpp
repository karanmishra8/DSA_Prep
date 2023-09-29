#include <iostream>
using namespace std;
int duplicate(int arr[],int size)
{
    int ans=0;
 for(int i=0;i<size;i++)
 {
     int index=abs(arr[i]);
     if(arr[index]<0)
     {
         ans=index;
         break;
     }
     arr[index]=arr[index]*-1;
 }
return ans;
}
int main() {
  int arr[]={1,2,3,1,4};
  int size=sizeof(arr)/sizeof(arr[0]);
  cout<<duplicate(arr,size);

    return 0;
}