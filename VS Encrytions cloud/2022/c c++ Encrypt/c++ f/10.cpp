/**
 * @Author: DASTAN_ALAM
 * @Date:   14-05-2022  Sat 05:17:14 PM  17:17:14
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 14-05-2022  Sat 05:28:45 PM  17:28:45
 */
#include <iostream>

using namespace std;
/*
union first
{
  int a;                    //any one can work only from this 3 difirent varaible  
  char vaf;                 //memory also shared in this 
  float amount;             // total memory is 4 byes max bytes is alloted     
};

int main()
{
    union first d1;   
    d1.a=1;
    cout<<d1.a;
    return 0;
}
*/
// typedef is working on union 

// using type def in unoin
typedef union fiest
{
  int a;
  char fav;
  float amount;
    
} f;

int main()
{
    f d1;
    d1.a=1;
    
    cout<<d1.a;
    return 0;
}