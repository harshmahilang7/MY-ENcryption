// /**
//  * @Author: Dastan Alam
//  * @Date:   2024-09-23 09:48:44 AM   09:09
//  * @Last Modified by:   Dastan Alam
//  * @Last Modified time: 2024-09-23 10:14:31 AM   10:09
//  */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// // 1.Deleting duplicate elements from array
// int main(int argc, char const *argv[])
// {
//     int a[100]={1,2,3,4,5,6,7,8,9,1};
//     int n=10;
//     for (int i = 0; i <n; i++)
//     {
//         for (int j = i+1; j <n; j++)
//         {
//             if (a[i]==a[j])
//             {
//                 for (int k = j; k < n - 1; k++)
//                 {
//                     a[k] = a[k + 1];
//                 }
//                 n--; // Reduce the size of the array
//                 j--; // Recheck the new element at position j
//             }
//         }
        
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d",a[i]);
//     }
    
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <stdint.h>
// #include <string.h>

// // 1. Deleting duplicate elements from array
int main(int argc, char const *argv[])
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1};
    int n = 10; // Number of elements in the array

    // Removing duplicates
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                // Shift all elements to the left
                for (int k = j; k < n - 1; k++)
                {
                    a[k] = a[k + 1];
                }
                n--; // Reduce the size of the array
                j--; // Recheck the new element at position j
            }
        }
    }

    // Printing the array after removing duplicates
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
