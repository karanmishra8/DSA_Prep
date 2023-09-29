#include <iostream>
using namespace std;

bool binary(int arr[],int target,int size)
{
 int mid=(s+e)/2;
    while(s<e)
    {
        if(arr[mid]==target)
        {
            return true;
        }
        
    int s=0,e=size-1;
   else if(arr[mid]>target)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return false;
}
int main() {
   int arr[]={2,4,5,6,9};
   int target=3;
   int size=sizeof(arr)/sizeof(arr[0]);
   cout<< binary(arr,target,size);       
    return 0;
}