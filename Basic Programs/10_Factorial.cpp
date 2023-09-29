#include <iostream>
using namespace std;
int main() {
   int n=4,fact=1;
   for(int i=n;i>=1;i--)
   {
       fact=fact*i;
   }
   cout<<fact;
    return 0;
}