#include <iostream>
using namespace std;
int remove(string str)
{
    int i=0,j=str.size()-1;
    while(i<=j)
    {
        if(str[i]!=str[j])
        {
            return 2;
        }
        else
        {
           i++;
           j--;
        }
    }
    return 1;
}
int main() {
   string str="abbabba";
   cout<<remove(str);
    return 0;
}