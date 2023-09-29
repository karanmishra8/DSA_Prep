#include <iostream>
using namespace std;
void rotate(int arr[],int n,int d)
{
    int temp[d]={0};
    for(int i=0;i<d;i++)
    {
        temp[i]=arr[i];
    }
    for(int i=d ;i<n;i++)
    {
        arr[i-d]=arr[i];
    }
    int j=0;
    for(int i=n-d;i<n;i++)
    {
        arr[i]=temp[j];
        j++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
     
}
int main() {
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int d=3;
    rotate(arr,size,d);

    return 0;
}