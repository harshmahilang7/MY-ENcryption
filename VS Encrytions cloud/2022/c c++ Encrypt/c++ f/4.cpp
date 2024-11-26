/**
 * @Author: DASTAN_ALAM
 * @Date:   13-05-2022  Fri 12:18:13 PM  12:18:13
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 12-06-2022  Sun 12:05:56 PM  12:05:56
 */
#include <iostream>
//with arugument and with reatutn value;
using namespace std;

int value(int ,int);
int mai  n()
{ 
    int a=5,b=5,c;
    c=value(a,b);
    cout<<c;
    return 0;
}
int value(int x,int y)

{
    int z=x+y;
    return z;
}
