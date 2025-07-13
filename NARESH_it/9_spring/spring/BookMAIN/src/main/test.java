package main;

import org.springframework.context.support.ClassPathXmlApplicationContext;

import sbeans.Book;

public class test {

	public static void main(String[] args) {
		ClassPathXmlApplicationContext ctx= new ClassPathXmlApplicationContext("com/nit/config/applicationcontext.xml");
		Book bean = ctx.getBean("c1",Book.class);
		System.out.println(bean);
	}
}
