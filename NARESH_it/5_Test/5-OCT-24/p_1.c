// /**
//  * @Author: Dastan Alam
//  * @Date:   2024-10-05 11:04:20 AM   11:10
//  * @Last Modified by:   Dastan Alam
//  * @Last Modified time: 2024-10-05 12:02:17 PM   12:10
//  */
// #include<stdio.h>
// // Write a C program to find the sum of the principal diagonal of a matrix.

// int main()
// {
//     int a[100][100];
//     int size,sum=0;
//     scanf("%d",&size);
//     for (int r=0; r<size; r++)
//     {
//         for(int c=0; c<size; c++)
//         {
//             scanf("%d",&a[r][c]);
//         }
//     }
//     for (int r=0; r<size; r++)
//     {
//         for(int c=0; c<size; c++)
//         {
//             if(r==c)
//             {
//                 sum=sum+a[r][c];
//             }
//         }
//     }
//     printf("Addition of the principal diagonal elements is :%d",sum);
//     return 0;
// }

#include<stdio.h>
//Write a C program to check is the String contains any vowel or not.

int main()
{
    char ch[100];
    int v=0;
    scanf("%s",ch);
    for(int i=0;ch[i];i++)
    {
        if(ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'||ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
        {
            printf("This String contains vowel");
            return 0;
        }
    }
    printf("There is no vowel present in this String");
    return 0;
}