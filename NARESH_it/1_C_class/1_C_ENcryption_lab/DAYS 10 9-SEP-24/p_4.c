/**
 * @Author: Dastan Alam
 * @Date:   2024-09-09 07:04:23 PM   19:09
 * @Last Modified by:   Dastan Alam
 * @Last Modified time: 2024-09-10 10:52:13 AM   10:09
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// ServiceCenter
// Write a C program for a service center by following given Rules and Guide lines.


// -> This service center only accepts 2 wheeler ,3 wheeler & 4 wheeler . If any other vehicle 

// came to you , you have to show a message that "this service center is not accepting

// other than 2 wheeler, 3 wheeler and 4 wheeler".



// -> If the vehicle is 2 ,3 & 4 only then you have to ask the user what is the age of the vehicle.



// -> If the age your vehicle is above 8 months then only accept the service center 

// otherwise you have to show a message that "your vehicle servie will done after a while".



// -> If the vehicle age is greater than 8 months then show options to the user on the console.



// Options:
// --------


// 1)Enter 1 for tyre problem

// 2)Enter 2 for fuel problem

// 3)Enter 3 for engine issue

// 4)Enter 4 for general services



// -> If the user enter 1 as input so it is tyre problem statement so you have to show a message "how many tyres you are facing the issue ?", based on the issue on the no of tyres,

// generate the bill.



// -> For example tyre cost Rs. 400 , if the user providing 3 tyre then the bill should be

// generated as Rs. 1200 in below format.



// Name of the owener

// Name of the bike

// Issue

// Bill



// -> For fuels problem cost is Rs.1500

// -> For engine issue cost is Rs.5000

// -> For general servicing cost is Rs.1000

// And generate the bill in the above format.

int main(int argc, char const *argv[])
{
    int w;
    printf("This service center only accepts \n2 wheeler press 2\n3 wheeler for press 3\n4 wheeler press 4  If any other vehicle ");
    scanf("%d",&w);
    if (w==2||w==3||w==4)
    {
        int mon;
        printf("what is the age of the vehicle =");
        scanf("%d",&mon);
        if (mon>8)
        {
            float tot_price=0;
            int opt;
            char issue[80];
            char ower[30];
            char Vehicle[30];
            start:
            printf("Options:\n");
            printf("--------\n");
            printf("1)Enter 1 for tyre problem\n");
            printf("2)Enter 2 for fuel problem\n");
            printf("3)Enter 3 for engine issue\n");
            printf("4)Enter 4 for general services\n");
            scanf("%d",&opt);
            switch (opt)
            {
            case 1:
                int ty_issue;
                printf("how many tyres you are facing the issue =");
                scanf("%d",&ty_issue);
                float ty_price=400;
                tot_price=ty_issue*ty_price;
                strcpy(issue, "tyres issue"); 
                break;
            case 2:
                char fuel_issue;
                printf("how many fuel you are facing the issue (y) =");
                scanf(" %c",&fuel_issue);
                if (fuel_issue=='y')
                {
                    tot_price=tot_price+1500;
                }
                strcpy(issue,"fuel issue");
                break;
            case 3:
                char engine_issue;
                printf("how many engine you are facing the issue (y) =");
                scanf(" %c",&engine_issue);
                if (engine_issue=='y')
                {
                    tot_price=tot_price+5000;
                }
                strcpy(issue, "engine issue");
                break;
            case 4:
                char general_issue;
                printf("how many general you are facing the issue (y) =");
                scanf(" %c",&general_issue);
                if (general_issue =='y')
                {
                    tot_price=tot_price+10000;
                }   
                strcpy(issue, "general services"); 
                break;
            default:
                printf("invalid");
                goto start;
                break;
            }
            printf("/t/t/tBill");
            printf("enter the name of ower=");
            scanf("%s",ower);
            printf("Name of the Vehicle=");
            scanf("%s",Vehicle);
            printf("Issue =%s\n",issue);
            printf("Bill=%.2f\n",tot_price);
        }
        else
        {
            printf("your vehicle servie will done after a while");
        }
    }
    else
    {
        printf("this service center is not accepting other than 2 wheeler, 3 wheeler and 4 wheeler");
    }
    
    return 0;
}
