/**
 * @Author: Dastan Alam
 * @Date:   06-04-2022  Wed 06:23:57 PM  18:04:94
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 09-04-2022  Sat 07:54:53 PM  19:04:74
 */
#include<iostream.h>
#include<conio.h>
class stu
{
int a,b;
public:
void get ()
	{
	 a=100;
	 b=21;
	}
stu show()
{cout<<"rollno="<<a<<endl<<"age="<<b;}
};
void main()
{ stu s1;
clrscr();
s1.get();
s1.show();
getch();

}




