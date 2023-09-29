#include<vector>
using namespace std;
void sub(string &str,int i,string ans,vector<string> &v)
{
    
    if(i==str.length())
    {
    v.push_back(ans);
    return; 
    }
    sub(str,i+1,ans+str[i],v);
    sub(str,i+1,ans,v);
}
   

int main() {
  string str="ab";
  int i=0,n=str.length();
  vector<string> v;
  string ans="";
  sub(str,i,ans,v);
  cout<<v.size()-1;
}