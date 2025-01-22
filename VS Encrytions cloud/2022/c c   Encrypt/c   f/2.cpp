/**
 * @Author: Dastan Alam
 * @Date:   08-04-2022  11:55:58 AM  11:04:18
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 13-05-2022  Fri 12:13:07 PM  12:13:07
 */
#include <iostream>

using namespace std;
// with argument but no return valueee   
void value(int);
int main()
{
    int a=5;
    value(a);
    return 0;
}
void value(int b)
{
    cout<<b;
}