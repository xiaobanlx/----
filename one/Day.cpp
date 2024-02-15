#include <iostream>
using namespace std;
int main()
{
    int w, n;
    cin >> w >> n;
    int Day;
    if ((w + n) % 7 == 0)
    {
        /* code */
        Day = 7;
    }
    else
    {
        Day = (w + n) % 7;
    }
    cout << Day << endl;
}