#include <iostream>
using namespace std;
int main()
{
    int n, len = 0, big = 0;
    cin >> n;
    int a[n+ 1] = {};
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        if (a[i] > a[i - 1])
            ++len;
        else
        {
            if (big < len)
                big = len;
            len = 1;
        }
    }
    cout << big;
}