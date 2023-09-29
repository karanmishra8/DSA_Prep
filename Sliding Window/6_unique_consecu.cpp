#include <iostream>
#include<unordered_map>
using namespace std;
int unique(string &s,int k)
{
    int i=0,j=0;
    int n=s.length();
    int max=0;
    unordered_map<char,int>mp;
    while(j<n){
        mp[s[j]]++;
        if(mp.size()<k)
        {
            j++;
        }
        else if(mp.size()==k)
        {
            if(j-i+1>max)
            {
                max=j-i+1;
            }
            j++;
        }
        else if(mp.size()>k)
        {
            while(mp.size()>k)
            {
                    mp[s[i]]--;
                   if(mp[s[i]]==0)
                       {
                     mp.erase(s[i]);
                        }
                        i++;
            }
          j++;  
        }
    }
    return max;
}
int main() {
   string str="aabacbebebe";
   int k=3;
   cout<<unique(str,k);

    return 0;
}