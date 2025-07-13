package main;

import org.springframework.context.annotation.AnnotationConfigApplicationContext;

import com.nit.sbeans.Vehicle;
import com.nit.sbeans.bike;


public class test 
{
	public static void main(String[] args) {
		AnnotationConfigApplicationContext ctx= new AnnotationConfigApplicationContext(AppConfig.class);
		bike bean = ctx.getBean("bike",bike.class);
		bean.run();
		
		
	}

}
