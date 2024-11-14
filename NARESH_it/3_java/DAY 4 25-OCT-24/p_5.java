/*Program-5
-----------
A whole-seller gives incentives in the form of discounts on the net bill. Write a program to input the net bill and calculate the discount as follows:

     Net Bill in Rupees			    Discount %
	<5000					5
	>=5000 and <10000			10
	>=10000					15

Display Discount %, Discount Amount and Amount Payable*/
import java.util.Scanner;
class p_5 
{
	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter the ammount");
		double ammout=sc.nextDouble();
		double discountPercentage;
		double discountAmount;
		double amountPayable;
		if (ammout<5000)
		{
			discountPercentage=5;
			discountAmount=ammout/100*discountPercentage;
			amountPayable=ammout-discountAmount;
			System.out.println("the discount Percentage = "+discountPercentage+"%");
			System.out.println("the discount Amount = "+discountAmount);
			System.out.println("the amount Payable = "+amountPayable);
		}
		else if (ammout>=5000 && ammout<10000)
		{
			discountPercentage=10;
			discountAmount=ammout/100*discountPercentage;
			amountPayable=ammout-discountAmount;
			System.out.println("the discount Percentage = "+discountPercentage+"%");
			System.out.println("the discount Amount = "+discountAmount);
			System.out.println("the amount Payable = "+amountPayable);
		}
		else
		{			discountPercentage=15;
			discountAmount=ammout/100*discountPercentage;
			amountPayable=ammout-discountAmount;
			System.out.println("the discount Percentage = "+discountPercentage+"%");
			System.out.println("the discount Amount = "+discountAmount);
			System.out.println("the amount Payable = "+amountPayable);
		}
		
	}
}
