/**
 * @Author: Dastan Alam
 * @Date:   2021-12-01 17:46:52
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2022-03-07 11:13:41
 */
/**
 * @Author: Dastan Alam
 * @Date:   2021-12-01 17:46:52
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2022-03-07 11:13:40
 */
#include<stdio.h>
#include<conio.h>
 int main()
 {  int i,j,n,k;
     clrscr();
     printf("enter the size of matrix:");
     scanf("%d",&n);
	for(i=0;i<=n;i++)
	{  for(k=1;k<=n;k++)
	    printf(" ");
	 for(j=1;j<=i;j++)
	    {printf("%d ",j);}
	    printf("\n");
	 }
      getch();
      return 0;
}
