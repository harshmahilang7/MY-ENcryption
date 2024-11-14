/**
 * @Author: Dastan Alam
 * @Date:   2024-10-18 07:18:05 PM   19:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-18 10:00:55 PM   22:10
 */
//     Input: str = i.like.this.program.very.much
// Output: much.very.program.this.like.i
// Explanation: After reversing the whole string(not individual words), the input string becomes much.very.program.this.like.i

#include <stdio.h>
int main()
{
    char s[] = "i.like.this.program.very.much";
	char a[40];
    int i,j,n,size=0,k=0;
    for(n=0;s[n];n++);
    for(i=n-1;i>=0;i--)
    {
        if(s[i]=='.' || i==0)
        {
            for(j=i+1;s[j]!='.'|| j<=n-1;j++)
            {
                a[k] = s[j];
                k++;
            }
            a[k]  = '.';
            k++;
        }
    }
    a[k] = '\0';
    puts(a);
}
