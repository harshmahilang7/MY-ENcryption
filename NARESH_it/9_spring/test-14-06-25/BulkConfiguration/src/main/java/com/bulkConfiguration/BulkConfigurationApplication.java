package com.bulkConfiguration;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.ApplicationContext;

import com.bulkConfiguration.model.NotificationConfig;

@SpringBootApplication
public class BulkConfigurationApplication {

	public static void main(String[] args) {
		ApplicationContext  ctx=SpringApplication.run(BulkConfigurationApplication.class, args);
		NotificationConfig bean = ctx.getBean("nc",NotificationConfig.class);
		System.out.println(bean);
	}
	
//	Question 2: Bulk Configuration Injection Using @ConfigurationProperties
//	Topic: @ConfigurationProperties with application.yml or application.properties
//	Level: Medium
//	Problem Statement:
//	You are building a notification system : email, SMS, and push notifications. These message templates should be configurable using application.yml.
//	You need to:
//	1.	Create a NotificationConfig class annotated with @ConfigurationProperties(prefix = "notifications") and @Component.
//	2.	Inject bulk configuration for all three notification types like this:
//	notifications:
//	  email:
//	    subject: "Welcome!"
//	    body: "Hello, thank you for registering."
//	  sms:
//	    body: "Thank you for signing up!"
//	  push:
//	    title: "Hi!"
//	    body: "Check out the new features."


}
