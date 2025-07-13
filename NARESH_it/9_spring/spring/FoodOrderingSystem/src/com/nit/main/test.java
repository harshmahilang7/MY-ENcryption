package com.nit.main;

import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

import com.nit.sbeans.ZomatoService;

public class test 

{
	public static void main(String[] args) {
		ClassPathXmlApplicationContext ctx= new ClassPathXmlApplicationContext("com/nit/config/applicationcontext.xml");
		Object bean = ctx.getBean("s1");
		ZomatoService zS=(ZomatoService)bean;
		System.out.println(zS);
	}

}
