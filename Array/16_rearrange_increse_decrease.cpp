#include <iostream>
#include<algorithm>
using namespace std;
void rearrange(int arr[],int size)
{
    sort(arr,arr+size);
    int n=size/2;
    int j=size-1;
    while(n<j)
    {
        swap(arr[n],arr[j]);
        n++;
        j--;
    }
}
int main() {
   int arr[]={33,22,25,55,6,66};
   int size=sizeof(arr)/sizeof(arr[0]);
   rearrange(arr,size);
    for(int i=0;i<size;i++)
     {
       cout<<arr[i]<<" ";
     }
    return 0;
}