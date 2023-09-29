#include <iostream>
using namespace std;
int split(string &str)
{
    int count0=0;
    int count1=0,len=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='0')
        {
            count0++;
        }
       else
        {
            count1++;
            }
        
         if(count0==count1)
        {
             len++;
            count0=0;
            count1=0;
        }
    }
  return len;
}
int main() {
string str="0011011001";
cout<<split(str);
    return 0;
}