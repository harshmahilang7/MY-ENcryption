package com.day17.ques3;

import java.util.Scanner;

//Create a ELC class TestProduct:
//Main Method:
//
//Ask the user how many Product objects they want to create.
//Use a loop to call createProduct() with parameters provided by the user to create each product, storing each Product object in an array.
//After all products are created, use another loop to display each product’s details, including the total amount after discount.
public class TestProduct {

	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		
		System.out.println("enter the no of object");
		Scanner sc=new Scanner(System.in);
		int no_of_obj=sc.nextInt();
		for (int i = 0; i < no_of_obj; i++) 
		{
			Product p1=Product.createProduct(1,"car", 10000, 2);
			System.out.println(p1);
			System.out.println("total amount : "+p1.calculateTotalAmount());
			
		}
		sc.close();
		
		

	}

}
