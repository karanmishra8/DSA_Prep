#include <iostream>
using namespace std;
bool pal(int arr[],int n)
{
   int i=0,j=n-1;
   while(i<j)
   {
       if(arr[i]!=arr[j])
       {
           return false;
       }
       else
       {
           i++;
           j--;
       }
   }
   return true;
}
int main() {
    int arr[]={1,2,3,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<pal(arr,n);
    return 0;
}