package com.day17.ques1_copy;

import java.util.Scanner;

public class TestStudent {

	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		System.out.println("enter the num of object");
		int noOfObj=sc.nextInt();
		for (int i = 0; i < noOfObj; i++)
		{
			Student obj2=Student.createStudent();
			System.out.println(obj2);	
		}
		

	}

}
