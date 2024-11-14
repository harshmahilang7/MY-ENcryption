/**
 * @Author: Dastan Alam
 * @Date:   2024-09-09 06:18:04 PM   18:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-10 07:06:39 PM   19:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// ShoppingCenter
// Imagine you are running a small shop selling various items like groceries, stationery, and household products. 
// One day, you decided to sell 100 units of a particular item that you bought in bulk. 

// Here is the information you have:
// Cost Price (CP) per unit: ₹50
// Selling Price (SP) per unit: ₹60
// Using the C program provided, calculate the total profit or loss you made from selling all 100 units of the item. 
// Additionally, what would be the outcome if you had to reduce the selling price to ₹45 per unit due to a sudden market drop?


// Sample input 1:

// Enter Cost Price (CP): ₹50
// Enter Selling Price (SP): ₹60

// Sample Output : 
// Profit per unit = 10₹
// Total Profit on 100 units = 1000₹

// -----------------------------

// Sample input 2:

// Enter Cost Price (CP): ₹50
// Enter Selling Price (SP): ₹45

// Sample Output : 
// Loss per unit = 5₹ 
// Total Loss on 100 units = 500₹

int main(int argc, char const *argv[])
{
    int cp,sp;
    printf("Enter Cost Price (CP): "); scanf("%d",&cp);
    printf("Enter Selling Price (SP): "); scanf("%d",&sp);
    
    if (cp<sp)
    {
        printf("Profit per unit =%d\n",sp-cp);
        printf("Loss on 100 units = %d\n",(sp-cp)*100);
        
    }
    else
        printf("Loss per unit =%d\n",cp-sp);
        printf("Loss on 100 units = %d\n",(cp-sp)*100);
    
    
    return 0;
}
