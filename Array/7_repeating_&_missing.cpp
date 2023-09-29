#include <iostream>
using namespace std;
void missing(int arr[],int size)
{
    int hash[size+1]={0};
    for(int i=0;i<size;i++)
    {
        hash[arr[i]]++;
    }
    for(int i=1;i<=size;i++)
    {
        if(hash[i]==2)
        {
            cout<<"repeating is "<<i<<" "<<endl;
        }
        else if(hash[i]==0)
        {
            cout<<"missig is "<<i<<endl;;
        }
    }
}
int main() {
  int arr[]={1,2,3,3,4};
  int size=sizeof(arr)/sizeof(arr[0]);
  missing(arr,size);

    return 0;
}