#include <iostream>
#include<vector>
using namespace std;
void sub(string &str,int i,string ans)
{
    if(i==str.length())
    {
    cout<<ans<<" ";
    return;
    }
    sub(str,i+1,ans+str[i]);
    sub(str,i+1,ans);
}
   

int main() {
  string str="abc";
  int i=0,n=str.length();
  string ans="";
  sub(str,i,ans);
}