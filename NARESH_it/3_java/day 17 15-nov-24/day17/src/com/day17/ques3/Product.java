package com.day17.ques3;


//Question : 3
//---------------
//Create a Product class with the following attributes:
//
//productId (int): The unique identifier for each product.
//productName (String): The name of the product.
//price (double): The price of a single unit of the product.
//quantity (int): The quantity of the product.
//In addition to these attributes, implement the following:
//
//Static Factory Method: Implement a static factory method named createProduct(int productId, String productName, double price, int quantity) in the Product class. This method should:

//Take productId, productName, price, and quantity as parameters.
//Initialize and return a new Product object using these parameters.
//Business Logic Method: Add a method named calculateTotalAmount() that:
//
//Calculates the total amount for the product (price * quantity).
//Applies a discount based on the total amount:
//Total > 1000: 10% discount.
//Total > 500: 5% discount.
//Total <= 500: No discount.
//Returns the total amount after applying the discount.
//Implement toString method that returns  the product’s details in this format: "Product ID: <productId>, Name: <productName>, Price: <price>, Quantity: <quantity>, Total Amount (after discount): <total_amount>".
//
//
//Create a ELC class TestProduct:
//Main Method:
//
//Ask the user how many Product objects they want to create.
//Use a loop to call createProduct() with parameters provided by the user to create each product, storing each Product object in an array.
//After all products are created, use another loop to display each product’s details, including the total amount after discount.

public class Product {
	
	int productId;
	String productName;
	double price;
	int quantity;
	double totalAmount;
	
	public static Product createProduct(int productId, String productName, double price, int quantity)
	{
		Product p1=new Product();
		p1.productId=productId;
		p1.productName=productName;
		p1.price=price;
		p1.quantity=quantity;
		return p1;
	}
	
	public double calculateTotalAmount()
	{
		totalAmount=price*quantity;
		//Applies a discount based on the total amount:
		//Total > 1000: 10% discount.
		//Total > 500: 5% discount.
		//Total <= 500: No discount.
		//Returns the total amount after applying the discount.
		
		if(totalAmount>1000)
		{
			totalAmount=totalAmount-totalAmount/100*10;
		}
		else if(totalAmount>500)
		{
			totalAmount=totalAmount-totalAmount/100*5;
		}
		else if(totalAmount<=500)
		{
			totalAmount=totalAmount;
		}
		
		return totalAmount;
	}

	@Override
	public String toString() {
		return "Product [productId=" + productId + ", productName=" + productName + ", price=" + price + ", quantity="
				+ quantity + "]";
	}
	
	
	
	
	
	

}
