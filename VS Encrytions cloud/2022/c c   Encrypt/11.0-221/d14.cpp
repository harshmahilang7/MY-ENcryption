/**
 * @Author: Dastan Alam
 * @Date:   26-04-2022  Tue 01:50:36 PM  13:04:56
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 26-04-2022  Tue 06:52:01 PM  18:04:57
 */
#include <iostream>
using namespace std;
int main()
{
    int i, j, n, prime,z=0;  
    cout<<"Enter the limit\n";  
    cin>>n;  
    cout<<"Prime Numbers from 2 To "<< n <<" are\n";  
    for(i = 2; i <= n; i++)  
    {  prime = 1;  
       for(j = 2; j <= i/2; j++)  
        {  
            if(i % j == 0)  
            {  
                prime = 0; 
                break;  
            }  
        }  
  
        if(prime)
         {   z=z+i; 
            cout<<i<<"\t";
         }  
              
    } 
    cout<<endl<<"the sum of prime number is ="<<z; 
    return 0;
}
