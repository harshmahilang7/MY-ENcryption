/**
 * @Author: Dastan Alam
 * @Date:   2024-08-30 06:00:13 PM   18:08
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-08-30 06:57:22 PM   18:08
 */
// Que 1 : Write a 'C' program to take the marks of a student in 5 subjects as input and determine how many subjects have marks greater than or equal to 35 and how many have marks less than 35. 
// ------- The program should not use any control statements (if, else, switch, etc.) or the ternary operator. 
// 
// Sample input  : int sub1 = 38, sub2 = 34, sub3 = 35, sub4 = 78, sub5 = 20
// 
// Sample Output : Pass in 3 subject and fail in 2 subject.  
    //    
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// per increment is must if not then value will worong
int main(int argc, char const *argv[])
{
    int sub1,sub2,sub3,sub4,sub5;
    // int sub1 = 38, sub2 = 34, sub3 = 35, sub4 = 78, sub5 = 20;
    int fail=0;
    int pass=0;
    printf("enter the subject1");
    scanf("%d",&sub1);
    printf("enter the subject2");
    scanf("%d",&sub2);
    printf("enter the subject3");
    scanf("%d",&sub3);
    printf("enter the subject4");
    scanf("%d",&sub4);
    printf("enter the subject5");
    scanf("%d",&sub5);
    (sub1<35)&&++fail||++pass;
    (sub2<35)&&++fail||++pass;
    (sub3<35)&&++fail||++pass;
    (sub4<35)&&++fail||++pass;
    (sub5<35)&&++fail||++pass;
    printf("Pass in %d subject and fail in %d subject",pass,fail);
    return 0;
}
