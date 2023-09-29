#include <iostream>
#include <unordered_map>
using namespace std;
int majority(int arr[], int n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for (auto x : mp)
    {
        if (x.second > n / 2)
        {
            return x.first;
        }
    }
    return 0;
}
int main()
{
    int arr[] = {2, 3, 2, 5, 2, 7, 7, 7, 7, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << majority(arr, n);

    return 0;
}