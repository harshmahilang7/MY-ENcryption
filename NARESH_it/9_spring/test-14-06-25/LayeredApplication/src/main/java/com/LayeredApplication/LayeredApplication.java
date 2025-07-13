package com.LayeredApplication;

import java.sql.SQLException;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.ApplicationContext;
import org.springframework.context.ConfigurableApplicationContext;

import com.LayeredApplication.controller.StudentController;

@SpringBootApplication
public class LayeredApplication 
{
//	Naresh I Technologies
//	Test Paper
//	B – 40 & 41
//	Question 1: Spring Boot Layered Application with Plain JDBC
//	Topic: Layered Application + Plain JDBC (No JPA)
//	Level: Medium
//	Problem Statement:
//	You are building a Student Management System using Spring Boot without using Spring Data JPA. Follow the layered architecture pattern: Controller -> Service -> Repository.
//	You are required to:
//	1.	Configure a MySQL database connection using application.properties.
//	2.	Create a Student class with fields: id, name, email, dob.
//	3.	Create an API /students that returns all students from the database using plain JDBC (i.e., using JdbcTemplate).
//	4.	Follow proper dependency injection and structure.
//	Requirements:
//	•	Use JdbcTemplate and not Spring Data JPA.
//	•	Structure your code using @RestController, @Service, and @Repository.
//	•	Read DB credentials from application.properties.


	public static void main(String[] args) throws SQLException {
		ApplicationContext ctx=SpringApplication.run(LayeredApplication.class, args);
		StudentController bean = ctx.getBean("sc",StudentController.class);
		bean.getA();
		((ConfigurableApplicationContext) ctx).close();
		
	}

}
