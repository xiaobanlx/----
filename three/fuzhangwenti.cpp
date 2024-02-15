#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 5e5 + 10;
int a[N];
signed main()
{
    int n;
    double fc = 0, s;
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    double ave = s * 1.0 / n;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] * (n - i + 1) < s)
        {
            s = s - a[i];
            fc += (a[i] - ave) * (a[i] - ave);
        }
        else
        {
            double cur_ave = s * 1.0 / (n - i + 1);
            fc += (cur_ave - ave) * (cur_ave - ave) * (n - i + 1);
            break;
        }
    }
    fc = sqrt(fc / n);
    printf("%.4lf", fc);
    return 0;
}