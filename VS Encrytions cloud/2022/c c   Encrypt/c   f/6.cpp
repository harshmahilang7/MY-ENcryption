/**
 * @Author: DASTAN_ALAM
 * @Date:   13-05-2022  Fri 01:37:17 PM  13:37:17
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 13-05-2022  Fri 01:45:28 PM  13:45:28
 */

// C++ program to demonstrate typedef
#include <iostream>
using namespace std;
  
// After this line dastan can be used
// in place of int
typedef int dastan;
  
dastan main()
{
    dastan a1, a2;
    a1 = 7;
    a2= 10;
    cout<<a1<<endl;
    cout<<a2<<endl;
    return 0;
}