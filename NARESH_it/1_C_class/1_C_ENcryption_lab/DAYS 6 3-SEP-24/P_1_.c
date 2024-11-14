/**
 * @Author: Dastan Alam
 * @Date:   2024-09-03 06:46:52 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-03 07:09:02 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Write a program to convert from lowercase Character to upercase Character


int main()
{
    char ch;
    printf("enter the LowerCase Character=");
    scanf(" %c",&ch);
    (ch>=97&&ch<=122)?printf("%c",ch-32):printf("worong input!");
    return 0;
}

/**
 * @Author: harsh
 * @Date:   2024-09-03 06:46:52 PM   18:09
 * @Last Modified by:   harsh
 * @Last Modified time: 2024-09-03 07:03:56 PM   19:09
 */
#include <stdio.h>

// Write a program to convert from uppercase Character to LowerCase Character


int main()
{
    char ch;
    
    printf("enter the uppercase Character=");
    scanf(" %c",&ch);

    (ch>=65&&ch<=90)?printf("LowerCase Character=%c",ch+32):printf("wrong input!");
    return 0;
}
