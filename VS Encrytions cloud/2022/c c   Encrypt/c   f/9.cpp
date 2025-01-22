/**
 * @Author: DASTAN_ALAM
 * @Date:   14-05-2022  Sat 04:41:54 PM  16:41:54
 * @Last Modified by:   DASTAN_ALAM
 * @Last Modified time: 14-05-2022  Sat 05:09:26 PM  17:09:26
 */
#include <iostream>

using namespace std;

// normal enum
int main()
{
    enum                         //you can give value of any just write "="; 
                                 // eg "dastan= 9";
    {dastan=9,harsh,prince_of_persia=23,arima,mr_veer,sonu,the_greate_hmg};
                                 //default start form 0
                                 // next_value = priveous_value + 1;
    cout<<arima;
                                 //arima have 24 becaue prince_of_persia is 23 ; 23+1 = 24  ;
    return 0;
}
//type def is not working in enum;
/*

//enum by typedef;

//typedef enum dast;
int main()
{
    dast{dastan,harsh,prince_of_persia,arima,mr_veer,sonu,the_greate_hmg};
    cout<<dastan;
}

*/
