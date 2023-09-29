#include <iostream>
using namespace std;
void nonrep(int arr[],int n)
{
    int i=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            cout<<arr[i];
        }
        else if(arr[i]==arr[i+1])
        {
           while(arr[i]==arr[i+1])
            {
                i++;
            }
        }
    }
}
int main() {
    int arr[]={1,1,2,3,3,4,5,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    nonrep(arr,n);
    return 0;
}