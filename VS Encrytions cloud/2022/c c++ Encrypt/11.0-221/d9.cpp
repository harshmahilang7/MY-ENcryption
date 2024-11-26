/**
 * @Author: Dastan Alam
 * @Date:   24-04-2022  Sun 06:01:20 PM  18:04:11
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 19-06-2022  Sun 06:10:34 PM  18:10:34
 */
#include <iostream>
#include<conio.h>

using namespace std;


int main()
{
    int i,j,k;
    char NA[10]="MALAYALAM";
    cout<<NA<<endl;
        for(i=1;i<=4;i++)
        {   for(j=0;j<=4-i;j++)
            {cout<<NA[j];}
            for (k=1;k<=2*i-1;k++)
            {cout<<" ";}
            for(j=4+i;j<=9;j++)
            {cout<<NA[j];}
        cout<<endl;
        }
    return 0;
}
