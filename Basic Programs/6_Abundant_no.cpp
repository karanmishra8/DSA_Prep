#include <iostream>
using namespace std;
int main()
{
  int n=12,temp=0;
  for(int i=n-1;i>0;i--)
  {
      if(n%i==0)
      {
          temp=temp+i;
      }
  }
  if(n<temp)
  {
      cout<<"abundant no";
  }
  else
  {
      cout<<"NOT abundant";
  }
 
  return 0;
}