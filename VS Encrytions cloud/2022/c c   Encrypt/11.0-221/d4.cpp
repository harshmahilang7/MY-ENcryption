/**
 * @Author: Dastan Alam
 * @Date:   20-04-2022  Wed 05:26:30 PM  17:04:15
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 20-04-2022  Wed 05:31:31 PM  17:04:43
 */

#include <iostream>
using namespace std;
  
int max(int x, int y) 
{ 
    if (x > y) 
    return x; 
    else
    return y; 
} 
  
int main() {
    int x = 10, y = 20; 
  
    // Calling above function to find max of 'a' and 'b' 
    int m = max(x, y); 
  
    cout << "m is " << m; 
    return 0; 
}