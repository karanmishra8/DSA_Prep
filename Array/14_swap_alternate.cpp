#include <iostream>
using namespace std;
void swap(int arr[],int size)
{
    for(int i=0;i<size;i+=2)
    {
        if(i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}

int main() {
   int arr[]={33,22,11,55,6};
   int size=sizeof(arr)/sizeof(arr[0]);
    swap(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}