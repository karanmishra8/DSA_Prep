#include <iostream>
#include<unordered_map>
using namespace std;
int picktoy(string &str,int k)
{
    int i=0,j=0,max=0;
    unordered_map<char,int>mp;
    int n=str.length();
    while(j<n)
    {
        mp[str[j]]++;
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
            mp[str[i]]--;
            if(mp[str[i]]==0)
            {
                mp.erase(str[i]);
            }
            i++;
            }
            j++;
        }
    }
    return max;
}
int main() {
   string str="bababcbcbab";
   int k=2;
   cout<<picktoy(str,2);
    return 0;
}