// 给定一个仅包含数字字符的字符串，请统计一下这个字符串中出现了多少个o多少个9。多少个1、
#include <iostream>
using namespace std;
int main()
{
    int t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, t8 = 0, t9 = 0;
    string a;
    cin>>a;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '0')
            t0++;
        if (a[i] == '1')
            t1++;
        if (a[i] == '2')
            t2++;
        if (a[i] == '3')
            t3++;
        if (a[i] == '4')
            t4++;
        if (a[i] == '5')
            t5++;
        if (a[i] == '6')
            t6++;
        if (a[i] == '7')
            t7++;
        if (a[i] == '8')
            t8++;
        if (a[i] == '9')
            t9++;
    }
    cout << t0 << ' ' << t1 << ' ' << t2 << ' ' << t3 << ' ' << t4 << ' ' << t5 << ' ' << t6 << ' ' << t7 << ' ' << t8 << ' ' << t9;
    return 0;
}