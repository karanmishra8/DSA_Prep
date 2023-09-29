#include <iostream>
using namespace std;
int main() {
    int a=10,b=20;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a;
    cout<<b;
    return 0;
}