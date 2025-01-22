/**
 * @Author: Dastan_Alam
 * @Date:   28-10-2022 05:14:54 PM       17:14:54
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 28-10-2022 05:23:08 PM       17:23:08
 */
#include <iostream>

using namespace std;
//Write a program to perform sorting operation in an array.

void selectionSort(int a[], int n) {
   int i, j, min, temp;
   for (i = 0; i < n - 1; i++) 
   {
      min = i;
      for (j = i + 1; j < n; j++)
      if (a[j] < a[min])
      min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
   }

}
int main() {
   int a[] = { 22, 91, 35, 78, 10, 8, 75, 99, 1, 67 };
   int n = sizeof(a)/ sizeof(a[0]);
   int i;
   cout<<"Given array is:"<<endl;
   for (i = 0; i < n; i++)
   cout<< a[i] <<" ";
   cout<<endl;
   selectionSort(a, n);
   cout<<"Sorted array is: ";
   for (i = 0; i < n; i++)
   cout<< a[i] <<" ";

   return 0;
}

