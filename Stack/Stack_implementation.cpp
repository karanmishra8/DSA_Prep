#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top;
    
    
    Stack(int size)
    {
         arr=new int[size];
        this->size=size;
        top=-1;
    }
    void push(int element)
    {
        if(size - top > 1)
        {
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Overflow";
        }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"Already empty";
        }
        else{
            top--;
        }
    }
    int getTop()
    {
        if(top==-1)
        {
            cout<<"empty";
        }
        else{
            return arr[top];
        }
    }
    int getSize()
    {
        return top+1;
    }
    bool isEmpty()
    {
        if(top==-1)
        {
            cout<<"Empty";
            return true;
        }
        else{
            return false;
            cout<<"not empty";
        }
    }
};
int main()
{
Stack s(5);
s.push(10);
s.push(3);
s.push(2);
s.push(5);
s.push(6);
cout<<s.getTop()<<endl;
s.pop();
cout<<s.getTop()<<endl;
s.push(1);
while(!s.isEmpty())
{
    cout<<s.getTop()<<endl;
    s.pop();
}
    return 0;
}