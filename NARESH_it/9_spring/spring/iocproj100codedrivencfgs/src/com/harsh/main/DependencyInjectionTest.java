package com.harsh.main;

import org.springframework.context.annotation.AnnotationConfigApplicationContext;

import com.harsh.cfgs.AppConfig;
import com.harsh.sbeans.WeekDayFinder;

public class DependencyInjectionTest 
{
	public static void main(String[] args) 
	{
		System.out.println("DependencyInjectionTest.main() (start)");
		
		AnnotationConfigApplicationContext ctx= new AnnotationConfigApplicationContext(AppConfig.class);
		
		WeekDayFinder finder= (WeekDayFinder)ctx.getBean("w");
		
		String msg = finder.showMessageOnDayOfWeek("raja");
		
		System.out.println(msg);
		
		ctx.close();
		
		System.out.println("DependencyInjectionTest.main() (end)");
	}

}
