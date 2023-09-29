#include <iostream>
using namespace std;
int main() {
   int n=221;
   int sum=0; int r;
   int c=n;
   while(n!=0)
   {
     r=n%10;
     sum=sum*10+r;
     n=n/10;
   }
   if(sum==c)
   {
       cout<<"palindrome";
   }
   else{
       cout<<"Not a palindrome";
   }
   
    return 0;
}