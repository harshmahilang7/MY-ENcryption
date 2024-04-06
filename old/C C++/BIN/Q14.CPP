/**
 * @Author: Dastan Alam
 * @Date:   09-04-2022  Sat 05:29:54 PM  17:04:52
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 09-04-2022  Sat 07:55:49 PM  19:04:43
 */
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
  char ch;
  while (1)
  {
  if (kbhit())          //Stores the pressed key in ch
      { ch = getch();   // Terminates the loop // when escape is pressed
       if (int(ch) == 27)
	  {break;}
       cout << "\nthe alam.exe is succusfull install\npress esc key to exit...."<<ch;
       }
  }getche() ;
}