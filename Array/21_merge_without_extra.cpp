#include <iostream>
#include<algorithm>
using namespace std;
int main() {
   int arr1[]={1,6};
   int arr2[]={2,4,7,8};
   int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
   int left=n-1,right=0;
   while(left>=0 && right<n)
   {
       if(arr1[left]>arr2[right])
       {
           swap(arr1[left],arr2[right]);
           left--;
           right++;
       }
       else {
           left--;
           right++;
       }
   }
   sort(arr1,arr1+n);
   sort(arr2,arr2+m);
   for(int i=0;i<n;i++)
   {
       cout<<arr1[i]<<" ";
   }
   cout<<endl;
   for(int i=0;i<m;i++)
   {
       cout<<arr2[i]<<" ";
   }
    return 0;
}