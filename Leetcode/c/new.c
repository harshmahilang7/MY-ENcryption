/**
 * @Author: Dastan Alam
 * @Date:   2024-10-30 08:21:27 AM   08:10
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-10-30 08:27:27 AM   08:10
 */
#include <stdio.h>
int kthFactor(int n, int k) 
{
    int q=0;
    int arr[100];
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            arr[q]=i;
            q++;
            if (q==k)
            {
                return i;
            }
            
        }
    }
    // for(int i=0;i<=q;i++)
    // {
    //     printf("%d",arr[i]);
    // }
    // printf("\n");
    return -1;
}
int main() {
    int n = 12, k = 3;
    int result = kthFactor(n, k);
    printf("The %d-th factor of %d is: %d\n", k, n, result);
    
    n = 7, k = 2;
    result = kthFactor(n, k);
    printf("The %d-th factor of %d is: %d\n", k, n, result);

    n = 4, k = 4;
    result = kthFactor(n, k);
    printf("The %d-th factor of %d is: %d\n", k, n, result);

    return 0;
}