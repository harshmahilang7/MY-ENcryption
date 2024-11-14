#include<iostream.h>
#include<constream.h>
class Box
{ double lenght;
  double breath;
  double height;
  public:
  Box (double l=2.5,double b=5.6,double h=3.3)
  {
  lenght =l;
  breath=b;
  height=h;
  }
  double volume()
  { return lenght*breath*height;}
  int compare(Box box)
	{
	if (this->volume()>box.volume())
		 return 1;
	else
		   return 0;
	}
};
  void main()
  {
   clrscr();
   Box b1(2.5,9.6,3.1);
   Box b2(2.6,4.6,11.9);

   if(b1.compare(b2))

   cout<<"b1 is greater";
      else
   cout<<"  b2 is grreter";
   getch();
  }
