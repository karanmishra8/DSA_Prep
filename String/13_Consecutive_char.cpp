#include <iostream>
using namespace std;
int character(string &str)
{
    int i=1;
    int count=1,ans=1;
    //count ye dekhne ke liye h ki current count
    //ans= final count
   for(int i=1;i<str.length();i++)
    {
        if(str[i-1]==str[i])
        {
            count++;
        }
        else
        {
             ans=max(count,ans);
             count=1;
        }
         ans=max(count,ans);
    }
    return ans;
}
int main() {
    string str="baabbb";
    cout<<character(str);
    return 0;
}