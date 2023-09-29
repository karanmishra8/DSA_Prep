#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void comman(int arr1[],int arr2[],int arr3[],int n1,int n2,int n3)
{
  unordered_map<int,int> mp1;
  for(int i=0;i<n1;i++)
  {
      mp1[arr1[i]]++;
  }
   unordered_map<int,int> mp2;
  for(int i=0;i<n2;i++)
  {
      mp2[arr2[i]]++;
  }
   unordered_map<int,int> mp3;
  for(int i=0;i<n3;i++)
  {
      mp3[arr3[i]]++;
  }
  vector<int>v;
  for(int i=0;i<n1;i++)
  {
      if(mp1[arr1[i]] && mp2[arr1[i]] &&  mp3[arr1[i]])
      {
          v.push_back(arr1[i]);
          mp1[arr1[i]]=0;
      }
  }
  for(int i=0;v.size();i++)
  {
      cout<<v[i]<<endl;
  }
}
int main() {
  int arr1[]={2,5,7,9,10};
  int arr2[]={1,2,6,7,34};
  int arr3[]={4,6,8,9,32};
  int n1=sizeof(arr1)/sizeof(arr1[0]);
  int n2=sizeof(arr2)/sizeof(arr2[0]);
  int n3=sizeof(arr3)/sizeof(arr3[0]);
  comman(arr1,arr2,arr2,n1,n2,n3);
    return 0;
}