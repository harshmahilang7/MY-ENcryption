/**
 * @Author: Dastan Alam
 * @Date:   2024-08-31 06:01:29 PM   18:08
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-01 06:15:55 PM   18:09
 */
// Que 1 :  A shopkeeper buys a TV set for Rs. 3500 and sells it at a profit of 27%. Apart from this a VAT of 12.7% and Service Charge is 3.87% is charged. 
// -------  Write a C program to Display total selling price, profit along with vat and service charge.
//          To calculate the selling price, profit, VAT, and service charge, follow these steps:

//          1) Calculate the selling price:

//             Selling Price = Cost Price + Profit

//             Selling Price = Rs. 3500 + (27% of Rs. 3500)


//          2) Calculate the profit:

//             Profit = Selling Price - Cost Price


//          3) Calculate VAT:

//             VAT = 12.7% of Selling Price


//          4) Calculate Service Charge:

//             Service Charge = 3.87% of Selling Price
#include <stdio.h>
// #include <stdlib.h>
// #include <stdint.h>
// #include <string.h>


// int main(int argc, char const *argv[])
int main()
{
    float tv_cost=3500.0;
    
    float profit=((float)27/(float)100)*(float)tv_cost; 
    
    float Selling_Price=tv_cost+profit;
    printf("Selling Price = Rs. 3500 + (27 of Rs. 3500)=%f\n",Selling_Price);
    
    printf("Profit =Selling Price - Cost Price=%f\n",profit);
    
    float vat=((float)12.7/(float)100)*(float)Selling_Price;
    printf("VAT = 12.7 of Selling Price =%f\n",vat);
    
    float Service_Charge=((float)3.87/(float)100)*(float)Selling_Price;
    printf("Service Charge = 3.87 of Selling Price=%f",Service_Charge);
    
    return 0;
}
