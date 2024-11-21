package com.day17.ques1;

import java.util.Scanner;

//
//Create a ELC class TestStudent
//Main Method: In the main method, write code to:
//
//Ask the user for the number of Student objects they want to create.
//Use a loop to call the createStudent() method the specified number of times, storing each Student object in an array.
//After creating all Student objects, use a loop to display the details of each student using the displayStudent() method.

public class TestStudent {

	public static void main(String[] args) {
		
		Scanner sc=new Scanner(System.in);
		System.out.println("enter the number of object");
		int nu_of_obj=sc.nextInt();
		for (int i = 0; i < nu_of_obj; i++) 
			
		{
			Student obj1=Student.createStudent();
			System.out.println(obj1);
			
		}
		sc.close();

	}

}
