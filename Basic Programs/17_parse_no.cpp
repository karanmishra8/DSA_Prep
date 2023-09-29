#include <iostream>
#include<vector>
using namespace std;
bool parse(int x)
{
    vector<int>temp;
    while(x!=0)
    {
        temp.push_back(x%2);
        x=x/2;
    }
    for(int i=0;i<temp.size();i++)
    {
        if(temp[i]==1 && temp[i+1]==1)
        {
            return false;
        }
        else{
            return true;
        }
    }
}
int main() {
    int n=72;
    cout<<parse(n);
    return 0;
}