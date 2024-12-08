/**
 * @Author: Dastan Alam
 * @Date:   2024-10-19 07:10:08 PM   19:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-19 07:50:21 PM   19:10
 */
// Online C compiler to run C program online
#include <stdio.h>
int isPrime(int n)
{
    int c=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c++;
            break;
        }
        
    }
    if (c==0){
        return 1;
    }
    else return 0;
}
int reverse(int y) 
{
    int rev,sum=0;
    while(y!=0)
    {
    rev=y%10;
    sum=sum*10+rev;
    y=y/10;
    }
    return sum;
    
}
int main() {
    // Write C code here
    int a[]={1,2,3,4,5,7,11,15,23};
    int size=sizeof(a)/sizeof(int);
    for(int i=0;i<=size;i++)
    {
        int x=isPrime(a[i]);
        int y=reverse(a[i]);
        // printf("%d",x);
        int y_c=isPrime(y);
        if(x==1&&y_c==1)
        {
            printf("%d ",a[i]);
        }
    }
    return 0;
}