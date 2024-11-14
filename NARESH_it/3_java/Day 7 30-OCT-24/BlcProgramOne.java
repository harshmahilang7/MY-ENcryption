/*
Program 01:
-----------
Write a Program on OOPs to define Product class properties and behaviour.

properties :
productId : int
productName : String
productPrice : double

Initialize these properties with the help of Methods using Scanner class not by using Object reference.

behavior:
setProductData() : public void
getProductInfo() : public void*/

//BLC
import java.util.Scanner;
class BlcProgramOne 
{
	int productId;
	String productName;
	double productPrice;
	public void setProductData()
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter the product id : ");
		productId=sc.nextInt();
		System.out.print("Enter the producd Name : ");
		productName=sc.nextLine();
		productName=sc.nextLine();
		System.out.print("Enter the price of product");
		productPrice=sc.nextDouble();
		sc.close();
	}
	public void getProductInfo()
	{
		System.out.print("the product id : "+productId);		
		System.out.print("the producd Name : "+productName);
		System.out.print("the price of product"+productPrice);
	}
	
	
}
