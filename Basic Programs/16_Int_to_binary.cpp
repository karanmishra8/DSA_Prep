#include <iostream>
#include<vector>
using namespace std;
int main() {
  int n=11;
  vector<int> temp;
  while(n!=0)
  {
      temp.push_back(n%2);
      n=n/2;
  }
  int m=temp.size();
  for(int i=m-1;i>=0;i--)
  {
      cout<<temp[i];
  }
    return 0;
}
