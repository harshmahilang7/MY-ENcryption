/**
 * @Author: Dastan_Alam
 * @Date:   23-07-2022 02:17:34 PM       14:17:34
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 09-08-2022 10:18:05 PM       22:18:05
 */
#include <stdio.h>
#include <conio.h>
int main()
{
    int n, rev = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0)
     {
	remainder = n % 10;
	rev = rev * 10 + remainder;
	n /= 10;
    }
    printf("Reversed number = %d", rev);
    return 0;
}
getch();


