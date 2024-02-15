#include <iostream>
using namespace std;
int main()
{

    char a[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int i, j, k;
    int count = 0;
    for (i = 0; i < 26; i++)
    {
        for (j = 0; j < 26; j++)
        {
            for (k = 0; k < 26; k++)
            {
                count++;
                if (count == 1320)
                {
                    cout << a[i] << a[j] << a[k];
                }
            }
        }
    }
    return 0;
}