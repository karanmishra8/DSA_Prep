#include <iostream>
using namespace std;
void print(int number)
{
int num[]={1,   4,    5,   9,   10,   40,   50,   90,   100,  400,  500,  900,  1000};
string str[]={"I","IV", "V", "IX", "X", "XL",  "L",  "XC",  "C", "CD",  "D",  "CM",  "M"};
int i=12;
while(number>0)
{
  if(num[i]>number){
     i--;
  }
  else
  {
      number=number-num[i];
      cout<<str[i];
  }
}
}
int main() {
   int number=234;
   print(number);
    return 0;
}
