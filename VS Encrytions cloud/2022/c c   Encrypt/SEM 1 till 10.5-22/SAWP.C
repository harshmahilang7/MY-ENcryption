/**
 * @Author: DASTAN_ALAM
 * @Date:   08-01-2022  Sat 05:58:52 PM  17:58:52
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 09-06-2022  Thu 06:19:53 PM  18:19:53
 */
#include<stdio.h>
// #include<coino.h>

int  main()
{
int a=1,b=2,c=3,d=4,e=5,f=6,g=7,h=8;
// clrscr();
printf("a=%d\n",a);
printf("b=%d\n",b);
printf("c=%d\n",c);
printf("d=%d\n",d);
printf("e=%d\n",e);
printf("f=%d\n",f);
printf("g=%d\n",g);
printf("h=%d\n\n\njagriti\t\tmahilang\n\n",h);
h=a-h;
a=a-h;
h=a+h;

g=b-g;
b=b-g;
g=b+g;

c=f-c;
f=f-c;
c=f+c;

d=e-d;
e=e-d;
d=d+e;

printf("a=%d\n",a);
printf("b=%d\n",b);
printf("c=%d\n",c);
printf("d=%d\n",d);
printf("e=%d\n",e);
printf("f=%d\n",f);
printf("g=%d\n",g);
printf("h=%d",h);
return 0;
// getch();
}
