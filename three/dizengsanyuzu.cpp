#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn = 100010;
int a[maxn], b[maxn], c[maxn];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);
    for (int i = 0; i < n; i++)
        scanf("%d", &c[i]);
    sort(a, a + n);
    sort(b, b + n);
    sort(c, c + n);
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ll x = lower_bound(a, a + n, b[i]) - a;

        ll y = n - (upper_bound(c, c + n, b[i]) - c);

        ans += y * x;
    }
    cout << ans << endl;
}