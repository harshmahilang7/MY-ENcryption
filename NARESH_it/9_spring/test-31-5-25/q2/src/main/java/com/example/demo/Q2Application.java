package com.example.demo;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.ApplicationContext;
import org.springframework.context.ConfigurableApplicationContext;
import org.springframework.context.annotation.Bean;

import com.example.demo.sbeans.CreditCardProcessor;
import com.example.demo.sbeans.EmailService;
import com.example.demo.sbeans.MessageService;
import com.example.demo.sbeans.PaymentProcessor;

@SpringBootApplication
public class Q2Application {
	
	
	public static void main(String[] args) {
		ApplicationContext ctx=SpringApplication.run(Q2Application.class, args);
		PaymentProcessor pean = ctx.getBean("pc",PaymentProcessor.class);
		pean.processPayment(0);
		System.out.println(pean.hashCode());
		PaymentProcessor pean1 = ctx.getBean("pc",PaymentProcessor.class);
		pean1.processPayment(0);
		System.out.println(pean1.hashCode());
		PaymentProcessor cean1 = ctx.getBean("cc",PaymentProcessor.class);
		System.out.println(cean1.hashCode());
		PaymentProcessor cean2 = ctx.getBean("cc",PaymentProcessor.class);
		System.out.println(cean2.hashCode());
		cean1.processPayment(0);
		((ConfigurableApplicationContext) ctx).close();
	}

}
