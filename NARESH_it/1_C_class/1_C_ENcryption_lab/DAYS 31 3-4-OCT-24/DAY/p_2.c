/**
 * @Author: Dastan Alam
 * @Date:   2024-10-03 12:20:19 PM   12:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-03 11:12:59 PM   23:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>


// Que 2 :
// =======

// Write a c program to print all the frequency of character present in string .

// Sample input: String s=" Hello Everyone"

// Sample output  :-
// The frequency of H is 1
// The frequency of e is 3
// The frequency of l is 2
// The frequency of o is 2
// The frequency of   is 1  --------THIS IS FOP CHECKING THE SPACE COUNT 
// The frequency of E is 1
// The frequency of v is 1
// The frequency of r is 1
// The frequency of y is 1
// The frequency of n is 1

// ==============================

int main(int argc, char const *argv[])
{
    char ch[100]="aaabbc";
    int i,f;
    for (i=0; ch[i]; i++)
    {
        f=0;
        for (int j = 0; ch[j]; j++)
        {
            if (ch[i]==ch[j])
            {
                f++;
            }
        }
        if (ch[i]==ch[i+1])
        {
            continue;
        }
        else
        printf("The frequency of %c is %d\n",ch[i],f);
        
    }
    return 0;
}
