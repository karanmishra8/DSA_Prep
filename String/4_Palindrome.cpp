#include <iostream>
using namespace std;
bool pal(string str)
{
    int size=str.size();
    int i=0,j=size-1;
    while(i<=j)
    {
        if(str[i]!=str[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}
int main() {
  string str="nayan";
  cout<<pal(str);
    return 0;
}
