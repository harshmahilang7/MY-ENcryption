/**
 * @Author: Dastan Alam
 * @Date:   2024-10-31 06:58:44 PM   18:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-31 07:14:57 PM   19:10
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

char numtochar(int num)
{
    if (num==1)
    {
        return 'I';
    }
    else if (num==5)
    {
        return 'V';
    }
    
    else if (num==10)
    {
        return 'X';
    }
    
    else if (num==50)
    {
        return 'L';
    }
    else if (num==100)
    {
        return 'C';
    }
    else if (num==500)
    {
        return 'D';
    }
    else if (num==1000)
    {
        return 'M';
    }
    // return 0;
    }
    



int singleRoman(int val){
    if (val >= 5 && val < 9){
        int sub = val - 5;
        printf("%c",numtochar(5));
        int itr = 0;
        while (itr != sub)
        {
            printf("%c",numtochar(1));
            itr++;
        }
    }
    else if (val == 9)
    {
        printf("IX");
    }
    
    else{
        int itr = 0;
        while (itr != val)
        {
            printf("%c",numtochar(1));
            itr++;
        }
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    int val = 9;
    singleRoman(val);
}
