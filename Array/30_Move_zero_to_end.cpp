#include <iostream>
using namespace std;
int main() {
    int arr[]={1,3,5,6,0,7,0,0,5};
    int n=9,j=-1;
   for(int i=0;i<n;i++) 
   {
       if(arr[i]==0)
       {
           j=i;
           break;
       }
   }
   for(int i=j+1;i<n;i++)
   {
       if(arr[i]!=0)
       {
           swap(arr[i],arr[j]);
           j++;
       }
   }
    for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
    return 0;
}