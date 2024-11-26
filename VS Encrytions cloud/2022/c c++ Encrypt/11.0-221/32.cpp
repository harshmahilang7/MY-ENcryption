/**
 * @Author: DASTAN_ALAM
 * @Date:   16-06-2022  Thu 09:39:11 PM  21:39:11
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 17-06-2022  Fri 08:44:35 AM  08:44:35
 */
// CPP program to illustrate
// concept of Virtual Functions

#include<iostream>
using namespace std;

class A {
public:
	virtual void print() = 0
	{	cout << "print of class A\n";      }

	void show()
	{	cout << "show of class A\n";         }
};

class B : public A {
public:
	void print()
	{  cout << "print of class B\n";      }

	void show()
	{   cout << "show of class B\n";   }
};

int main()
{
	A *obj1;
	B obj2;
	obj1 = &obj2;

	// Virtual function, binded at runtime
	obj1->print();

	// Non-virtual function, binded at compile time
	obj1->show();
	return 0;
}
