#include <iostream>
using namespace std;
void remove(int arr[],int n)
{
    int i=0,count=0;
  for(int j=1;j<n;j++)
  {
      if(arr[i]==arr[j])
      {
          continue;
      }
      else
      {
          arr[i+1]=arr[j];
          count++;
          i++;
      }
     
  }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"count is "<<count+1;
}
int main() {
    int arr[]={1,2,2,3,4,4,5,6,7,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    remove(arr,size);

    return 0;
}