#include <iostream>
using namespace std;
int main() {
  int a=-1,b=1,n=6,c;
  for(int i=0;i<n;i++)
  {
      c=a+b;
      cout<<c;
      a=b;
      b=c;
  }
  return 0;
}