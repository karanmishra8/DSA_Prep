#include <iostream>
#include <list>
using namespace std;
void negative(int arr[], int k, int size)
{
    int i = 0, j = 0;
    list<int> l;
    while (j < size)
    {
        if (arr[j] < 0)
        {
            l.push_back(arr[j]);
        }
        if (j - i + 1 < k)
        {
            j++;
        }
        else if (j - i + 1 == k)
        {
            if (l.size()==0)
            {
                cout << 0;
            }
            else
            {
                cout << l.front();
                if (arr[i] == l.front())
                {
                    l.pop_front();
                }
            }
            i++;
            j++;
        }
    }
}
int main()
{
    int arr[] = {2, -3, -4, 5, -7, 8, 0};
    int k = 3;
    int size = sizeof(arr) / sizeof(arr[0]);
    negative(arr, k, size);
    return 0;
}