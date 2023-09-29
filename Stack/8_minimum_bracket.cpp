
#include <iostream>
#include <stack>
using namespace std;
int reversal(string &str)
{

    if (str.length() % 2 == 1)
    {
        return -1;
    }
    stack<char> s;
    int a = 0, b = 0;
    int ans = 0;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if (ch == '{')
        {
            s.push(ch);
        }
        else
        {

            if (!s.empty() && s.top() == '{')
                s.pop();
            else
                s.push(ch);
        }
    }
    while (!s.empty())
    {
        if (s.top() == '{')
        {
            a++;
        }
        else
        {
            b++;
        }
        s.pop();
        ans = (a + 1) / 2 + (b + 1) / 2;
    }
    return ans;
}
int main()
{
    string str = "(((()))(";
    cout << reversal(str);
    return 0;
}
