#include <iostream>
#include<vector>
using namespace std;
void reverse(string &str,int size,int i,int j)
{
    if(i==j)
    {
        return;
    }
    swap(str[i],str[j]);
    reverse(str,size,i+1,j-1);
}

int main() {
   string str="karan";
   int size=str.size();
   int i=0,j=size-1;
   reverse(str,size,i,j);
   for(int i=0;i<size;i++)
   {
       cout<<str[i]<<"";
   }
    return 0;
}