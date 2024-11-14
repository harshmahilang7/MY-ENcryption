/**
 * @Author: Dastan Alam
 * @Date:   2024-08-28 06:23:11 PM   18:08
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-08-28 06:56:38 PM   18:08
 */
// Que 3 :  Write a 'C' program to declare and initialize two variable like int a=10,b=20 and print the Addition, substraction, multiplication,division,Modulation operation.
// -------

// Sample input : a=20, b=10;

// Sample Output : 
//                Addition is : 30
//                substraction is : 10
//                Multiplication is : 200
//                Division is : 2
//                Modulation is : 0
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


int main()
{
    int a=20,b=10;
    printf("Addition=%d\n",a+b);
    printf("substraction=%d\n",b-a);
    printf("Multiplication=%d\n",a*b);
    printf("Division=%d\n",a/b);
    printf("Modulation=%d\n",a%b);
    return 0;
}
