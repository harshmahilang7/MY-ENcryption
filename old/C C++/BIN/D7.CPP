/**
 * @Author: Dastan Alam
 * @Date:   24-04-2022  Sun 11:43:54 AM  11:04:83
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 24-04-2022  Sun 11:55:48 AM  11:04:79
 */
#include <iostream.h>
#include <conio.h>

void main()
{
	int q,w;
	clrscr();
	for( q=1;q<=5;q++)
	{
		for(w=1;w<=q;w++)
		{cout<<"x";}
	cout<<endl;
	}
	for(q=1;q<=4;q++)
	{	for(w=4;w>=q;w--)
		{cout<<"q";}
	cout<<endl;
	}
getch();
}

