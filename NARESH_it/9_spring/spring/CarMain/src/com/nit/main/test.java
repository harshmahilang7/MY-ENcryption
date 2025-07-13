package com.nit.main;

import org.springframework.context.support.ClassPathXmlApplicationContext;

import com.nit.bean.Car;


public class test {

	public static void main(String[] args) {
		ClassPathXmlApplicationContext ctx= new ClassPathXmlApplicationContext("com/nit/config/applicationcontext.xml");
		Car bean = ctx.getBean("c1",Car.class);
		System.out.println(bean);
	}
}

