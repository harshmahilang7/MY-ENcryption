/**
 * @Author: Dastan Alam
 * @Date:   2024-10-08 07:06:28 PM   19:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-08 07:10:28 PM   19:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


// Que 4 :
// =======
// 
// Write a function to find the length of a given string (excluding the null character).
// 
// -> create int main() function
// -> create int getLength(char str[]) function. this function will return length of string
// -> in main function read String and call the getLength fuction and print the output.
// 
// Sample input : Hello
// Sample output: Length of the string: 5
// 
// 
// Sample input : ThisIsALongString
// Sample output: Length of the string: 17

int getLength(char str[])
{
    int i;
    for (i = 0; str[i]; i++);
    return i;
    
}
int main(int argc, char const *argv[])
{
    char a[100]="hello";
    printf("%d",getLength(a));
    return 0;
}
