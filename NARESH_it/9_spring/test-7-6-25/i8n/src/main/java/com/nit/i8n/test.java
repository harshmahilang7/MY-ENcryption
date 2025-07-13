package com.nit.i8n;


import java.util.Locale;

import org.springframework.context.annotation.AnnotationConfigApplicationContext;

import com.nit.i8n.GreetingController.GreetingCont;
import com.nit.i8n.config.AppConfig;

public class test 
{
	public static void main(String[] args) {
		AnnotationConfigApplicationContext ctx= new AnnotationConfigApplicationContext(AppConfig.class);
		String lang="fr";
		Locale l= new Locale(lang);
		String name="harsh";
		String message = ctx.getMessage("greeting.message",GreetingCont.GreetingService(name,l), l);
		System.out.println(message);
		
	}

}



//2. Internationalization (i18n) with Spring Core
//Problem Statement
//Build an Application that returns localized greeting messages (English, French) using Spring Core's internationalization features.
//Tasks:
//1.	Create messages_en.properties and messages_fr.properties with keys:
//•	greeting.message=Hello, {0}!
//•	(French equivalent: greeting.message=Bonjour, {0}!)
//2.	Configure MessageSource and LocaleResolver in a Spring @Configuration class.
//3.	Implement a GreetingService with a method:
//4.	Create a GreetingController that accepts a name parameter and locale (via request parameter).




