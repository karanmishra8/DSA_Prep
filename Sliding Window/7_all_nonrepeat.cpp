#include <iostream>
#include <unordered_map>
using namespace std;
int allunique(string &s)
{
    int i = 0, j = 0;
    int n = s.length();
    int max = 0;
    unordered_map<char, int> mp;
    while (j < n)
    {
        mp[s[j]]++;
        if (j - i + 1 == mp.size())
        {
            if (j - i + 1 > max)
            {
                max = j - i + 1;
            }
        }
        else if (j - i + 1 > mp.size())
        {
            while (j - i + 1 > mp.size())
            {
                mp[s[i]]--;
                if (mp[s[i]] == 0)
                {
                    mp.erase(s[i]);
                }
                i++;
            }
        }
        j++;
    }
    return max;
}
int main()
{
    string str="kakknbnbjdhjdb";
    cout << allunique(str);

    return 0;
}