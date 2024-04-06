/**
 * @Author: Dastan Alam
 * @Date:   18-04-2022  Mon 07:28:08 PM  19:04:04
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 19-04-2022  Tue 09:24:02 PM  21:04:48
 */
#include<iostream>
#include<conio.h>
class hmg
{ private:
	int a,b,c;
  public:
	int d,e;
  int setdata(int a1,int b1,int c1);
  void getdata();
};
void hmg::getdata()
 {	std:cout<<"the value of a is "<<a<<"\n";
	std:cout<<"the value of b is "<<b<<"\n";
	sdt:cout<<"the value of c is "<<c<<"\n";
	std:cout<<"the value of d is "<<d<<"\n";
	std:cout<<"the value of e is "<<e<<"\n";
  }
int hmg::setdata(int a1,int b1,int c1)
{ a=a1;
  b=b1;
  c=c1;
}
int main(){
//clrscr();
hmg e1;
e1.setdata(3,6,9);
//e1.a=2;
e1.d=12;
e1.e=15;
e1.getdata();
//getch();
}