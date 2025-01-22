/**
 * @Author: DASTAN_ALAM
 * @Date:   06-05-2022  Fri 01:30:33 PM  13:30:33
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 12-06-2022  Sun 10:35:16 AM  10:35:16
 */
//wap to find factoral of a number using recursion
#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
int main()
{
    int num;
    cout<<"what's the number=";
    cin>>num;
    cout << "Factorial of "
         << num << " is " << factorial(num) << endl;
    return 0;
}
/*
output--
what's the number=5
Factorial of 5 is 120
*/