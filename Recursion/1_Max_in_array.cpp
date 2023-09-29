#include <iostream>
#include<algorithm>
using namespace std;
int maximum(int arr[],int n,int i,int &maxi)
{
   if(i==n)
   {
       return 0;
   }
    maxi=max(arr[i],maxi);
   maximum(arr,n,i+1,maxi);
   return maxi;
}
int main() {
   int arr[]={2,5,1,7,3};
   int n=5;
   int maxi=0;
   cout<<maximum(arr,n,0,maxi);

    return 0;
}