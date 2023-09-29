#include <iostream>
using namespace std;
void sorti(int arr[],int n)
{
    int l=0,k=0,m=n-1;
    while(k<m)
    {
        if(arr[k]==0)
        {
            swap(arr[l],arr[k]);
            l++;
            k++;
        }
        if(arr[k]==1)
        {
            k++;
        }
        if(arr[k]==2)
        {
            swap(arr[k],arr[m]);
            m--;
        }
    }
}
int main() {
   int arr[]={2,1,0,2,1,1,0};
   int n=sizeof(arr)/sizeof(arr[0]);
   sorti(arr,n);
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
    return 0;
}