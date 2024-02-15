#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int min[4] = {10000000, 10000000, 10000000};
    for (int i = 0; i < n; i++)
    {
        for (int j = 2; j >= 0; j--)
        {
            if (a[i] < min[j])
            {
                min[j + 1] = min[j];
                min[j] = a[i];
            }
        }
        if (i >= 2)
            cout << min[2] << " ";
    }
    return 0;
}