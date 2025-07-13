package com.nit.main;

import org.springframework.context.support.ClassPathXmlApplicationContext;

import com.nit.sbean.Laptop;


public class test {

	public static void main(String[] args) {
		ClassPathXmlApplicationContext ctx= new ClassPathXmlApplicationContext("com/nit/config/applicationcontext.xml");
		Laptop bean = ctx.getBean("e1",Laptop.class);
		System.out.println(bean);
	}
}

