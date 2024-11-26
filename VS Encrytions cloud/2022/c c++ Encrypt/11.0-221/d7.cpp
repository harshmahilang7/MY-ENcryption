/**
 * @Author: Dastan Alam
 * @Date:   24-04-2022  Sun 11:43:54 AM  11:04:83
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 12-08-2022 09:19:57 AM       09:19:57
 */
/**
 * @Author: Dastan Alam
 * @Date:   24-04-2022  Sun 02:48:03 PM  14:04:99
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 24-04-2022  Sun 02:55:00 PM  14:04:33
 */
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i, j, k;
    // clrscr();
    for (i = 1; i <= 5; i++)
    {
        for (j = 4; j >= i; j--)
        {
            cout << " ";
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            cout << "x";
        }
        cout << endl;
    }
    for (i = 4; i >= 1; i--)
    {
        for (j = 0; j <= 4 - i; j++)
            cout << " ";
        for (k = i; k <= 2 * i - 1; k++)
            cout << "x";
        for (k = 0; k < i - 1; k++)
            cout << "x";
        cout << endl;
    }

    return 0;
    // getch();
}
