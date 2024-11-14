/**
 * @Author: Dastan Alam
 * @Date:   2024-09-06 07:30:43 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-06 07:44:11 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Que 3 :
// ======= 

// Write a 'C' program to take the marks of a student in 5 subjects as input and determine how many subjects have marks greater than or equal to 35 and how many have marks less than 35. 
// The program should not use any control statements (if, else, switch, etc.) or the ternary operator. 

// Sample input  : int sub1 = 38, sub2 = 34, sub3 = 35, sub4 = 78, sub5 = 20

// Sample Output : Pass in 3 subject and fail in 2 subject.

int main()
{
    int sub1=38,sub2=34,sub3=35,sub4=78,sub5=20;
    int pass=0,fail=0;
    (sub1>=35)&&++pass||++fail;
    (sub2>=35)&&++pass||++fail;
    (sub3>=35)&&++pass||++fail;
    (sub4>=35)&&++pass||++fail;
    (sub5>=35)&&++pass||++fail;
    printf("Pass in %d subject and fail in %d subject",pass,fail);
    return 0;
}
