/**
 * @Author: DASTAN_ALAM
 * @Date:   06-05-2022  Fri 03:19:55 PM  15:19:55
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 12-08-2022 11:14:07 AM       11:14:07
 */
#include <iostream>
#include "bits/stdc++.h"
using namespace std;
void din(char digit)
{

    switch (digit) 
    {
    case '0':
        cout << "Zero ";
        break;
    case '1':
        cout << "One ";
        break;
    case '2':
        cout << "Two ";
        break;
    case '3':
        cout << "Three ";
        break;
    case '4':
        cout << "Four ";
        break;
    case '5':
        cout << "Five ";
        break;
    case '6':
        cout << "Six ";
        break;
    case '7':
        cout << "Seven ";
        break;
    case '8':
        cout << "Eight ";
        break;
    case '9':
        cout << "Nine ";
        break;
    }
}
void wordout(string N)
{
    int i, length = N.length();
    for (i = 0; i < length; i++) 
    { din(N[i]);}
}


int main()
{
    string N = "123";
    wordout(N);
    return 0;
}