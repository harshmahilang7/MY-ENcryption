package com.nt.main;

import org.springframework.context.annotation.AnnotationConfigApplicationContext;

import com.nt.sbeans.EmailService;
import com.nt.sbeans.NotificationClient;

public class test 
{
	public static void main(String[] args) {
		
		AnnotationConfigApplicationContext ctx= new AnnotationConfigApplicationContext(AppConfig.class);
		NotificationClient bean = ctx.getBean("one",NotificationClient.class);
		bea
		
	}

}
