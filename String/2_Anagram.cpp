#include <iostream>
using namespace std;
bool anagram(string str1,string str2)
{
     int arr1[26]={0};
   for(int i=0;i<str1.length();i++)
   {
       char ch= str1[i];
       int num=ch-'a';
       arr1[num]++;
   }
  for(int i=0;i<str2.length();i++)
   {
       char ch= str2[i];
       int num=ch-'a';
       arr1[num]--;
   }
for(int i=0;i<26;i++)
{
    if(arr1[i]!=0)
    {
        return false;
    }
}
    return true;
}


int main() {
   string str1="karan";
   string str2="nakar";
  cout<<anagram(str1,str2);
  return 0;
}