#include<iostream>
#include<stack>
using namespace std;
int main()
{
    //Creation
stack<int> st;

//Pushing element in stack in LIFO order
st.push(10);
st.push(5);
st.push(7);
st.push(2);
st.push(3);
st.push(4);
//Size

cout<<"Size of stack is "<<st.size()<<endl;

//Accessing the top element

cout<<"Top is "<<st.top()<<endl;

//Removing the element

st.pop();

cout<<"Top is "<<st.top()<<endl;

// Check if stack is empty
if(st.empty())
{
    cout<<"empty"<<endl;
}
else{
    cout<<"not empty"<<endl;
}

//Traversing through all the element of the stack
while(!st.empty())
{
    cout<<st.top()<<" ";
    st.pop();
}
    return 0;
}