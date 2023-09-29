#include <iostream>
using namespace std;
void minmax(int arr[],int size)
{
    int min=9999,max=-9999;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"maximum is "<<max<<endl;
    cout<<"minimum is "<<min<<endl;
}

int main() {
   int arr[]={22,14,5,26,9};
   int size=sizeof(arr)/sizeof(arr[0]);
    minmax(arr,size);       
    return 0;
}