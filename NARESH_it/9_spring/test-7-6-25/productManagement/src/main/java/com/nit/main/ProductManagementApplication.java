package com.nit.main;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.ApplicationContext;
import org.springframework.context.ConfigurableApplicationContext;


import com.nit.main.Controller.ProductController;
import com.nit.main.model.Product;



//Naresh I Technologies
//Test Paper
//B – 40 & 41
//1. Layered JDBC Application with Spring Boot
//Problem Statement
//Create a Spring Boot application for product management using a layered architecture (Controller-Service-DAO) with plain JDBC (no Spring Data/JPA). Implement CRUD operations for a Product entity with fields:
//•	id (Long)
//•	name (String)
//•	price (Double)
//Tasks:
//1.	Configure a DataSource in application.properties for MySQL.
//2.	Implement a ProductDao class with methods:
//•	insertProduct(Product product)
//•	Product getProductById(Long id)
//•	List<Product> getAllProducts()
//3.	Handle DataAccessException in the service layer.
@SpringBootApplication
public class ProductManagementApplication {

	public static void main(String[] args) {
		ApplicationContext ctx = SpringApplication.run(ProductManagementApplication.class, args);
		ProductController bean = ctx.getBean("pc",ProductController.class);
		Product p= new Product();
		p.setId(2);
		p.setName("harsh");
		p.setPrice(200);
		bean.insertProduct(p);
		bean.getProductById((long) 1);
		bean.getAllProducts();
	}

}
