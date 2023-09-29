#include <iostream>
using namespace std;
char getmax(string s,int n)
{
     int arr[26]={0};
     for(int i=0;i<n;i++)
     {
         char ch=s[i];
         int num=ch -'a';
         arr[num]++;
     }
     int maxi=-1,ans=0;
     for(int i=0;i<26;i++)
     {
         if(maxi<arr[i])
         {
             ans=i;
             maxi=arr[i];
         }
     }
     return 'a'+ ans;
}
int main() {
string str="karan";
cout<<getmax(str,5);
}