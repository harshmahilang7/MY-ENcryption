package com.nit.cfgd;

import org.springframework.context.annotation.ComponentScan;
import org.springframework.context.annotation.Configuration;
import org.springframework.context.annotation.PropertySource;

@Configuration
@ComponentScan(basePackages = "com.nit.sbeans")
@PropertySource(value="com/nit/properties/player.properties")
public class AppConfig 
{
	
	

}
