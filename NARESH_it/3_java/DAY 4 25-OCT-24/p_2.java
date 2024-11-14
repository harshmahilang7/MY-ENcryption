/*
Program-2
----------
Rohan purchased an old cycle for Rs. 1200 and spend Rs. 250 on repairs, Rs. 350 in coloring and added new accessories worth Rs. 500. Rohan wants to make a profit of Rs. 1500 on selling the cycle. Find the selling price of the cycle. Write a java program to store all values and calculate and display the selling price.

=========================================*/

class p_2  
{
	public static void main(String[] args) 
	{
		double priceOfAnOldCycle=1200;
		double repairCost=250;
		double coloringCost=350;
		double NewAccessorieCost=500;
		double profit=1500;
		double sellingPrice=priceOfAnOldCycle+repairCost+coloringCost+NewAccessorieCost+profit;
		System.out.println("the selling price : "+sellingPrice);
	}
}
