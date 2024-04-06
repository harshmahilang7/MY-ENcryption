/**
 * @Author: Dastan Alam
 * @Date:   09-04-2022  Sat 05:07:37 PM  17:04:50
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 09-04-2022  Sat 07:54:49 PM  19:04:22
 */
// C++ program to demonstrate use of kbhit()
/*#include <iostream.h>
#include <conio.h>

int main()
{       clrscr();
	while (!kbhit())
		cout<<("Press a key\n");
	getch();
	return 0;
}*/
// C++ program to fetch key pressed using
// kbhit()
#include <iostream.h>
#include <conio.h>
//using namespace std;
int main()
{
	char ch;
	while (1) {

		if ( kbhit() ) {

			// Stores the pressed key in ch
			ch = getch();

			// Terminates the loop
			// when escape is pressed
			if (int(ch) == 27)
				break;

			cout << "\nKey pressed= " << ch;
		}
	}
	return 0;
}
