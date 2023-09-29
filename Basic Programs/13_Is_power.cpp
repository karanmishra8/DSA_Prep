  include <iostream>
 using namespace std;
 int pow(int x,int a)
 {  int ans;
     for(int i=1;i<a;i++)
     {
       ans=ans*x;
     }
     return ans;
 }
 bool ispow(int n)
 {
     for(int i=0;i<=30;i++)
     {
         int ans= pow(2,3);
         if(ans=n)
         {
             return true;
         }
         return false;
     }
 }
 
int main() {
     bool k=ispow(14);
     cout<<k;
    return 0;
}
