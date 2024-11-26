/**
 * @Author: Dastan_Alam
 * @Date:   23-07-2022 02:17:34 PM       14:17:34
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 09-08-2022 10:18:03 PM       22:18:03
 */
/**
 * @Author: Dastan_Alam
 * @Date:   23-07-2022 02:17:34 PM       14:17:34
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 09-08-2022 10:18:03 PM       22:18:03
 */
#include <stdio.h>
int main() {
   int i, space, rows, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; i++, k = 0) {
      for (space = 1; space <= rows - i; space++) {
	 printf("  ");
      }
      for (;k != 2 * i - 1;) {
	 printf("* ");
	 k++;
      }
      printf("\n");
   }
  getch();
}
