#include <iostream>
#include<algorithm>
using namespace std;
int main() {
  int arr[]={1,2,2,3,5,8,8};
  sort(arr,arr+7);
for(int i=0;i<6;i++)
{
    if(arr[i]!=arr[i+1])
    {
        continue;
    }
    else
    {
        cout<<arr[i];
        i++;
        if(arr[i]==arr[i+1])
        {
            i++;
        }
    }
}
    return 0;
}
