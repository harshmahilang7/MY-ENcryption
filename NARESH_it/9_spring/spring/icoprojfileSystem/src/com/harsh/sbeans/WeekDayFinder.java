package com.harsh.sbeans;

import java.time.LocalDate;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Component;


@Component("w")
public class WeekDayFinder 
{
	
	private LocalDate date;
	
	//0-param-Construction 
	public WeekDayFinder() {
		System.out.println("WeekDayFinder.WeekDayFinder() 0-param-constuction");
		
	}
	
	
	@Autowired   
	public void setDate(LocalDate date) {
		System.out.println("WeekDayFinder.setDate()");
		this.date = date;
	}



	
	public String showMessageOnDayOfWeek(String user) 
	{
		
		System.out.println("WeekDayFinder.showMessageOnDayOfWeek()");
		int wno = date.getDayOfWeek().getValue();
		
		if (wno>=1 && wno<=5) 
		{
			return "work Hard "+user;
		}
		else
		{
			return "relex "+user;
		}
	}
}
