/*Program-1 (Using CommandLine arguments)
-----------

A shopkeeper buys a TV set for Rs. 32,500 and sells it at a profit of 27%. Apart from this a VAT of 12.7% and Service Charge is 3.87% is charged. Display total selling price, profit along with vat and service charge.

Sample Input/Output :

Cost Price: Rs. 32500.00
Profit (27%): Rs. 8775.00
Selling Price before VAT and Service Charge: Rs. 41275.00
VAT (12.7%): Rs. 5241.93
Service Charge (3.87%): Rs. 1597.34
Total Selling Price: Rs. 48114.27

=========================================*/


class p_1 
{
	public static void main(String[] args) 
	{
		double cP=Float.parseFloat(args[0]);
		double profit=cP/100*27;
		System.out.println("Cost Price: Rs."+(cP));
		System.out.println("Profit (27%) Rs."+(profit));
		System.out.println("Selling Price before VAT and Service Charge: Rs."+(cP+profit));
		double vat=(cP+profit)/100*12.7;
		double sC=(cP+profit)/100*3.87;
		System.out.println("VAT (12.7%): Rs."+vat);
		System.out.println("Service Charge (3.87%): Rs."+sC);
		System.out.println("Total Selling Price: Rs."+(cP+profit+vat+sC));
	}
}
