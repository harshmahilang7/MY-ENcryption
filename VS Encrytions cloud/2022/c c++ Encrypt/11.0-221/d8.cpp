/**
 * @Author: Dastan Alam
 * @Date:   24-04-2022  Sun 04:14:59 PM  16:04:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 24-04-2022  Sun 04:31:21 PM  16:04:47
 */

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int i,j,k;
//clrscr();
	for(i=1;i<=5;i++)
	{	for(j=5;j>=i;j--)
		{
			cout<<"  ";
		}
		for(k=1;k<=i*2-1;k++)
		{   if(k%2==0)
            cout<<"0 ";
            else
            cout<<"1 ";
            }
	cout<<endl;
	}

}