#include <bits/stdc++.h>
using namespace std;
char s[1005];
char x[1005];
int cnt = 0;
void change(int i)
{
    if (s[i] == '*')
    {
        s[i] = 'o';
    }
    else
    {
        s[i] = '*';
    }
}
int main()
{
    cin >> s >> x;
    int len = strlen(x);
    for (int i = 0; i < len; i++)
    {
        if (s[i] != x[i])
        {
            change(i);
            change(i + 1);
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}