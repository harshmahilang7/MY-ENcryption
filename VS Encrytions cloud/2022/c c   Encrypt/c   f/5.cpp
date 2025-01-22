/**
 * @Author: DASTAN_ALAM
 * @Date:   13-05-2022  Fri 01:37:04 PM  13:37:04
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 14-05-2022  Sat 04:19:09 PM  16:19:09
 */
#include <iostream>

using namespace std;

struct first 
{
    int i;
    char favchaar;
    float j;
    
};

int main()
{
    struct first dastan;
    dastan.i=200;
    dastan.favchaar='d';
    dastan.j=120000;
    
    cout<<dastan.i<<endl;
    cout<<dastan.favchaar<<endl;
    cout<<dastan.j<<endl;
    
    return 0;
}
