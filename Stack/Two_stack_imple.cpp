#include<iostream>
using namespace std;
class TwoStack
{
public:
int *arr;
int size;
int top1;
int top2;


TwoStack(int size)
{
    arr=new int[size];
    this->size=size;
    top1=-1;
    top2=size;
}
void push1(int data)
{
    if(top2-top1>1)
    {
        top1++;
        arr[top1]=data;
    }
    else{
        cout<<"overflow";
    }
}
void push2(int data)
{
    if(top2-top1>1)
    {
        top2--;
        arr[top2]=data;
    }
    else{
        cout<<"overflow";
    }
}
void pop1()
{
    if(top1==-1)
    {
        cout<<"underflow";
    }
    else
    {
        arr[top1]=0;
        top1--;
        
    }
}
void pop2()
{
    if(top2==size)
    {
        cout<<"underflow";
    }
    else
    {
        arr[top2]=0;
        top2++;
    }
}
void print()
{
    cout<<endl;
    cout<<"Top 1 is "<< top1<<endl;
    cout<<"Top 2 is "<<top2<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"  ";
    }
}
};
int main()
{
TwoStack s(8);
s.push1(3);
s.print();
s.push1(4);
s.print();
s.push1(3);
s.print();
s.push1(32);
s.print();
s.push2(9);
s.print();
s.push2(3);
s.print();
s.pop1();
s.print();
s.pop2();
s.print();
    return 0;
}