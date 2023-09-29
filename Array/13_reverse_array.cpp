#include <iostream>
using namespace std;
void reverse(int arr[],int size)
{
    int i=0,j=size-1;
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main() {
   int arr[]={33,22,11,55,6};
   int size=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}