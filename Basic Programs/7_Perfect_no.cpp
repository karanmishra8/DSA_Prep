#include <iostream>
using namespace std;
int main()
{
  int n=6,temp=0;
  for(int i=n-1;i>0;i--)
  {
      if(n%i==0)
      {
          temp=temp+i;
      }
  }
  if(n==temp)
  {
      cout<<"Perfect no";
  }
  else
  {
      cout<<"NOT perferct";
  }
  cout<<temp;
  return 0;
}