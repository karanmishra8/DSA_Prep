#include <iostream>
using namespace std;
void seclar(int arr[],int size)
{
    int max=-9999,s_max=-1;
    for(int i=0;i<size;i++)
    {
        if(max<arr[i])
        {
            s_max=max;
            max=arr[i];
        }
    }
    cout<<s_max;
}

int main() {
   int arr[]={33,22,55,55,6};
   int size=sizeof(arr)/sizeof(arr[0]);
    seclar(arr,size);       
    return 0;
}