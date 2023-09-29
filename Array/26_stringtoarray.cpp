#include <iostream>
using namespace std;
int main() {
    string str="8889942910";
    int n=str.length();
    int arr[n]={0};
    for(int i=0;i<str.length();i++)
    {
        arr[i]=(str[i])-48;
    }
    
for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}