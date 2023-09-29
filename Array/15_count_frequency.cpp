#include <iostream>
#include<unordered_map>
using namespace std;
int main() {
   int arr[]={33,22,22,55,6};
   int size=sizeof(arr)/sizeof(arr[0]);
   unordered_map<int,int>mp;
   for(int i=0;i<size;i++)
   {
       mp[arr[i]]++;
   }
   for(auto x:mp)
   {
       cout<<x.first<<" "<<x.second<<endl;
   }
    return 0;
}