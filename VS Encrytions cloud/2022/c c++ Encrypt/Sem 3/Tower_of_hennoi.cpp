/**
 * @Author: Dastan_Alam
 * @Date:   22-12-2022 11:18:11 PM       23:18:11
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 27-12-2022 10:05:38 PM       22:05:38
 */
#include <iostream>
#include <conio.h>
using namespace std;

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
  if (n == 0)
  {
    return;
  }
  towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
  cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;
  towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main()
{
  int N = 3;
  towerOfHanoi(N, 'A', 'C', 'B');
  return 0;
}