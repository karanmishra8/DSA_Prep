#include <iostream>
using namespace std;
int main() {
  int a=19,b=20,c=122;
  if(c>a && a>b)
  {
      cout<<"c is greatest";
  }
  else if(b>a && a>c)
  {
      cout<<"b is greatest";
  }
  else
  {
      cout<<"a is greatest";
  }

    return 0;
}  

