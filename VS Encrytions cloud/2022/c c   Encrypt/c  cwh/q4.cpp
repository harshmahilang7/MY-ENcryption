/**
 * @Author: DASTAN_ALAM
 * @Date:   21-06-2022  Tue 06:18:51 PM  18:18:51
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 21-06-2022  Tue 06:23:02 PM  18:23:02
 */
#include <iostream>

using namespace std;

int main()


    char a[4] = {'A', 'B', 'C', 'D'};
    char b[4] = {' ', 'E', 'F', 'G'};
    cout << "A B C D E F G\n";
    i = 1;
    do
    {
        int j=i;
        do
        {
            cout << a[j - i] << " ";
            j++;
        } while (j <= 3);
        k=2;
        do
        {
            cout << "  ";
            k++;
        } while (k <= i * 2);
        
        j=i;
        do
        {
            cout << b[j] << " ";
            j++;
        } while (j <= 3);
        cout << endl;
        i++;
    } while (i <= 3);


return 0;
}
