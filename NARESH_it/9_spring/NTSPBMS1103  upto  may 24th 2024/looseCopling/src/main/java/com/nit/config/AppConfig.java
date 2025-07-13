package com.nit.config;

import org.springframework.context.annotation.ComponentScan;
import org.springframework.context.annotation.Configuration;
import org.springframework.context.annotation.ImportResource;

@Configuration
@ComponentScan(basePackages = "com.nit.sbeans")
@ImportResource("com/nit/config/applicationContext.xml")
public class AppConfig 
{

}
