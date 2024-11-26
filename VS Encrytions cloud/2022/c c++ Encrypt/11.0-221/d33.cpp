/**
 * @Author: DASTAN_ALAM
 * @Date:   11-05-2022  Wed 04:14:44 PM  16:14:44
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 11-05-2022  Wed 04:17:52 PM  16:17:52
 */
// C++ code to linearly search x in arr[]. If x
// is present then return its location, otherwise
// return -1
 
#include <iostream>
using namespace std;
int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
 
int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = search(arr, n, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}