package com.nit.main;



import org.springframework.context.annotation.AnnotationConfigApplicationContext;

import com.nit.config.AppConfig;
import com.nit.sbeans.Vehicle;

public class test 
{
	public static void main(String[] args) {
		AnnotationConfigApplicationContext ctx= new AnnotationConfigApplicationContext(AppConfig.class);
		Vehicle bean = ctx.getBean("v",Vehicle.class);
		bean.getdetail();
		ctx.close();
		
	}

}
