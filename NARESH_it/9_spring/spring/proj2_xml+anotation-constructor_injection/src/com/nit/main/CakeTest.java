package com.nit.main;

import org.springframework.context.support.ClassPathXmlApplicationContext;

import com.nit.beans.OrderCake;

public class CakeTest 
{
	public static void main(String[] args) {
		ClassPathXmlApplicationContext ctx= new ClassPathXmlApplicationContext("com/nit/config/applicationContext.xml");
//		                                           applicationContext.xml
		
		
		OrderCake bean = ctx.getBean("c1",OrderCake.class);
		bean.showCake();
		ctx.close();
	}
	
	
	
	
	

}
