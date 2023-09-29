#include <iostream>
using namespace std;
int main()
{
    string str="bbabbad";
    int len=str.length(),i=0;
    string ch="";
    while(str[i]!=NULL)
    {
        if(str[i]!=str[i+1])
        {
            ch=ch+str[i];
            i++;
        }
        if((str[i+1]&& str[i]==str[i+1]))
        {
        while(str[i+1]&& str[i]==str[i+1])
        {
            i++;
        }
        i++;
        }
    }
    cout<<ch;
}


