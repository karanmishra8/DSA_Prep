#include <iostream>
using namespace std;
int main() {
   int n=153;
   int sum=0; int r;
   int c=n;
   while(n!=0)
   {
     r=n%10;
     sum=sum+r*r*r;
     n=n/10;
   }
   if(sum==c)
   {
       cout<<"armstrong";
   }
   else{
       cout<<"Not a armstrong";
   }
   
    return 0;
}
