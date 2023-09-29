#include <iostream>
using namespace std;
void reverse2(string &str)
{
    int size=str.size();
    int i=0,j=size-1;
    while(i<=j)
    {
        swap(str[i],str[j]);
        i++;
        j--;
    }
   cout<<str;
}
int main() {
string str="karan";
reverse2(str);
}