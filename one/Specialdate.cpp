#include <iostream>
using namespace std;
bool Year(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int main()
{
    int count = 0;
    for (int year = 2000; year <= 1999999; ++year)
    {
        for (int month = 1; month <= 12; month++)
        {
            int dayinmonth = 31;
            if (month == 4 || month == 6 || month == 9 || month == 11)
            {
                dayinmonth = 30;
            }
            else if (month == 2)
            {
                dayinmonth = Year(year) ? 29 : 28;
            }
            if (year % month == 0)
            {
                for (int day = 1; day <= dayinmonth; ++day)
                {
                    if (year % day == 0)
                    {
                        count++;
                    }
                }   
            }
        }
    }
    cout << count + 1 << endl;
}