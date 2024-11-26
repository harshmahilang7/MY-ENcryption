#include<stdio.h>
#include<conio.h>
main()
{
int t,b[10],f,a[100],n,item,loc=-1,x,i,j,temp,limit;
clrscr();
printf("\n\n\t\t1.)sort the elements");
printf("\n\n\t\t2.)linear search");
printf("\n\n\t\t3.)binary search");
printf("\n\n\n\t\tenter your choice: ");
scanf("%d",&x);
switch(x)
{ case 1:printf("--------------------------n");
	 printf("\n\t\t\tsorting");
	 printf("\n\n\nenter the limit: ");
	 scanf("%d",&limit);
	 printf("\n\nenter the contents of array: \n");
	 for(i=1;i<=limit;i++)
	 {scanf("%d",&a[i]);}
	 for(i=1;i<=limit;i++)
	   {
	    for(j=1;j<=limit;j++)
	      {
	      if(a[j]>a[j+1])
	      {
	       temp=a[j];
	       a[j]=a[j+1];
	       a[j+1]=temp;
	       }
	    }
	 }
printf("\nsorted elements are: \n");
for(i=1;i<=limit;i++)
{
printf("\n%d",a[i]);
}
break;
case 2:printf("-----------------------------\n");
 printf("\n\n\t\t\tlinear search");
 printf("\n\nenter the limit: ");
 scanf("%d",&n);
 printf("\n\nenter numbers: ");
 for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
 printf("\n\nenter number to be searched: \n");
 scanf("%d",&item);
 for(i=1;i<=n;i++)
{
 if(item==a[i])
 {
 loc=i;
 break;
 }
}
 if(loc>=0)
 {
printf("\n%d is found in position %d",item,loc);
 }
 else
{
printf("\n\nnumber not found");
case 3:printf("----------------------------------------\n");
 printf("\n\n\t\t\tbinary search");
 for(i=0;i<=10;i++)
{
printf("\n\nenter the number: ");
scanf("%d",&b[i]);
}
 for(i=1;i<=9;i++)
{
for(j=1;j<=8;j++)
{
 if(b[i]>b[j+1])
 {
 t=b[j];
 b[j]=b[j+1];
 b[j+1]=t;
 }
}
}
 printf("\nenter number to be searched: ");
 scanf("%d",&n);
 if(n>b[5])
{
 for(i=5;i<=10;i++)
 {
 if(b[i]==n)
 { f=1;
 break;
 }
 }
}
 else
{ for(i=5;i>=1;i--)
 { if(b[i]==n)
 {
 f=1;
 break;
 }
 }
}
 if(f==1)
 printf("\nnumber found");
 else
 printf("\nnumber not found");
 break;
 }
}
getch();}