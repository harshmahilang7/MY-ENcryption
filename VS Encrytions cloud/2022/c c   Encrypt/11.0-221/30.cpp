/**
 * @Author: DASTAN_ALAM
 * @Date:   06-05-2022  Fri 02:33:30 PM  14:33:30
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 06-05-2022  Fri 03:34:22 PM  15:34:22
 */
//convert num-to-words 
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

char *ch[]={"zero","one","two","three","four","five","six","seven","eight","nine"};

void val(int a,int temp)
{
	int r,s;
	while(a>0)
	{
		r=a%10;
		s=s*10+r;
		cout<<ch[r]<<" ";
		a=a/10;
	}
	if(s==temp)
}
int main()
{
	int a,s=0,r,temp;
	
	cout<<"Enter any number : ";
	cin>>a;
	temp=a;
	while(a>0)
	{
		r=a%10;
		s=s*10+r;
		a=a/10;
	}
	val(s,temp);
	getch();
}
