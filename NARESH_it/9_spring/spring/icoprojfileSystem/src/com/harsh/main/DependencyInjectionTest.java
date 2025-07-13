package com.harsh.main;


import org.springframework.context.support.FileSystemXmlApplicationContext;

import com.harsh.sbeans.WeekDayFinder;

public class DependencyInjectionTest 
{
	public static void main(String[] args) 
	{
		System.out.println("DependencyInjectionTest.main() (start)");
		
		FileSystemXmlApplicationContext ctx= new FileSystemXmlApplicationContext("src/com/harsh/cfgs/applicationContext.xml");
		
		WeekDayFinder finder= (WeekDayFinder)ctx.getBean("w");
		
		String msg = finder.showMessageOnDayOfWeek("raja");
		
		System.out.println(msg);
		
		ctx.close();
		
		System.out.println("DependencyInjectionTest.main() (end)");
	}

}
