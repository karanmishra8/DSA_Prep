#include <iostream>
#include<string>
using namespace std;
string countsay(int n)
{
    if(n==1) return "1";
      if(n==2) return "11";
      string s="11";
      for(int i=3;i<=n;i++)
      {
          string t="";
          s= s+'\0';
          int c=1;
          for(int j=1;j<s.length();j++)
          {
              if(s[j]!=s[j-1])
              {
                  t=t+to_string(c);
                  t=t+s[j-1];
                  c=1;
              }
              else
              
                  c++;
          }
           s=t;
      }
      return s;
}
int main() {
   int n=5;
   cout<<countsay(n);
    return 0;
}