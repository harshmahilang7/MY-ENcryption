/**
 * @Author: Dastan Alam
 * @Date:   2024-08-27 06:53:31 PM   18:08
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-08-28 11:32:04 AM   11:08
 */
// WAP thtat round off 100 and next 100 input 435 output as 400

#include<stdio.h>
#include<conio.h>

// int main()
// {
//     int a=435;
//     //int b=(a<=450) ? printf("it's round off is 400") : printf("it's round off is 500");

//     a%10>=5 && printf("Next multiple of %d is : %d",a,((a/100)+1)*100) || printf("Next multiple of %d is : %d",a,((a/100)*100)); 
//     return 0;
// }
int main()
{
    int a=435;
    int q=0;
    q=a/100;
    // printf("%d",q); output 4 last word of 435
    printf("the previous %d",(q*100));
    printf("the previous %d",(q%100+1)*100);
    return 0;

}

