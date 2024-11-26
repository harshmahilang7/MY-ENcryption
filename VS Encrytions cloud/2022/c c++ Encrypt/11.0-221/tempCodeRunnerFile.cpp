#include<iostream>
using namespace std;

class A {
public:
	virtual void print()
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
