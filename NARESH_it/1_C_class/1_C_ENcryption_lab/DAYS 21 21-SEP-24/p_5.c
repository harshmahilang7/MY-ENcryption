/**
 * @Author: Dastan Alam
 * @Date:   2024-09-22 11:31:28 AM   11:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-23 09:23:11 AM   09:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
 

// Que 5 : 
// ======= 
// Write a C program to given pattern 
//          *        
//        * * *     
//      * * * * *    
//    * * * * * * *     
//  * * * * * * * * *   
//    * * * * * * *   
//      * * * * *     
//        * * *      
//          *   
 
// ======================================= 
 
 
 
 
 

int main(int argc, char const *argv[])
{
    int count,x,y,f=0;
    x=y=count=5;
    for (int r = 1; r <= count*2-1; r++)
    {
        for (int C = 1; C <= (count*2-1); C++)
        {
            if(C>=x&&C<=y)
            printf("x");
            else printf(" ");
   
        }
        if (x==1&&y==9) f=1;
        if (f==0){x--;y++;}
        else {x++;y--;}
        printf("\n");
        
    }
    
    
    
    return 0;
}
