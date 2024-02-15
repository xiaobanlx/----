#include <iostream>
using namespace std;
int main()
{
    int k, sum = 0;
    cin >> k;
    int t = 0;
    for (int i = 1; i <= k; i++)
    {
        if (i == t * (t + 1) / 2 + 1)
            t++;
        sum += t;
    }
    cout << sum;
    return 0;
}