package com.nt.sbeans;

import java.time.LocalDate;

public class WishMessageGenerator 
{
	private LocalDate date;
	private int age;
	
	
	
	public WishMessageGenerator()
	{
		super();
	}


	public WishMessageGenerator(LocalDate date, int age) {
		super();
		this.date = date;
		this.age = age;
	}


	public void setDate(LocalDate date) 
	{
		this.date = date;
	}

	public void setAge(int age) 
	{
		this.age = age;
	}
	
	
	public  String showWishMessage(String user) 
	{
		int monthValue = date.getMonthValue();
		if(monthValue>3&&monthValue<6)
		{
			return "summer";
		}
		else if(monthValue>6&&monthValue<9)
		{
			return "rain";
		}
		else
		{
			return "winter";
		}
	}
	
	

}
