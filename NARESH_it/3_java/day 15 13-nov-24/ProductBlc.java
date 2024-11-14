/*
Question - 4
--------------

Create a class Product (BLC Class)

Attributes :

name			data type
-------			-----------
productName    	         :  String
productId	     	 :  int
price		     	 :  double

Access Modifier : private (for all variable)


Take a no parameterize constructor and initialize default value to all the properties.

Take another parameterize constructor  to initialize with user-provided values and includes validation to handle invalid inputs.

Methods:

Method Name  	:display_info
Return Type		:void
Acess Modifier 	:public 

Take a Main Class (ELC Class) which is having main method and instantiate the object and execute the method to print the product details.

Test Cases :
--------------
Test Case 1: 

Default Product
Product Name: Default Product
Product ID: 0
Price: 0.0

Test Case 2: 
---------------
User Product
Product Name: Laptop
Product ID: 101
Price: 75000.0

Test Case 3: 
---------------
Invalid Product Creation
Error: Product name cannot be null or empty.
Error: Product ID cannot be negative.
Error: Price cannot be negative.
Product Name: Default Product
Product ID: 0
Price: 0.0
*/

class ProductBlc 
{
	String productName;
    int productId;
	double price;  
	ProductBlc()
	{
		productName="Default Product";
		productId=11;
		price=1;
	}
	ProductBlc(String productName,int productId,double price)
	{
		if(productName==""||productName==null)
		{
			System.err.println("Error: Product name cannot be null or empty.");
		}
		else{
			this.productName=productName;
		}
		
		if(productId<0)
		{
			System.err.println("Error: Product ID cannot be negative.");
		}
		else{
			this.productId=productId;
		}
		
		if(price<0)
		{
			System.err.println("Error: price cannot be negative.");
		}
		else{
			this.price=price;
		}
		
	
		
	}
	
	
    public void display_info()
	{
		System.out.println("productName :"+productName);
		System.out.println("productId :"+productId);
		System.out.println("price :"+price);
	}

}
