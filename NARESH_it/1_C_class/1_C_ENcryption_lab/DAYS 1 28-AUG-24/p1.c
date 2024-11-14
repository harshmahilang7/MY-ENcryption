/**
 * @Author: Dastan Alam
 * @Date:   2024-08-28 06:11:15 PM   18:08
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-08-28 06:28:16 PM   18:08
 */

// Que 1 :  Write a 'C' program to print student details using printf() function only.
// -------

// Sample Output : Name = Raj Malhotra
//                 Roll No = 101
//                 Branch = CSE
//                 Address = Hyderabad
//                 Collage Name = Naresh It
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int main()
{
    char Name[] = "Raj Malhotra";
    int Roll_No = 101;
    char Branch[] = "CSE";
    char Address[] = "Hyderabad";
    char Collage_Name[] = "Naresh It";
    
    printf("Name = %s\n",Name);
    printf("Roll No =%d\n" ,Roll_No);
    printf("Address = %s\n", Address);
    printf("Collage Name = %s\n",Collage_Name);
    return 0;
}
