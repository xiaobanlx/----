#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
struct Date
{
    int month, day;
    int h, m, s;
} d[530];

int main(int argc, char **argv)
{
    for (int i = 1; i <= 520; i++)
    {
        scanf("2022-%d-%d %d:%d:%d", &d[i].month, &d[i].day, &d[i].h, &d[i].m, &d[i].s);
    }
    cout << "-------------" << endl;
    cout << d[520].month;
    return 0;
}