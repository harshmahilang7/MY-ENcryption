/**
 * @Author: Dastan Alam
 * @Date:   20-04-2022  Wed 05:35:21 PM  17:04:32
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 20-04-2022  Wed 05:39:58 PM  17:04:92
 */


#include <iostream>
using namespace std;
  int x=89;
void fun(int x) {
    x = 30;
    cout<< "x =" <<x;
}
  
int main() {
    int x = 20;
    fun(x);
    cout << "x = " <<x;
    return 0;
}