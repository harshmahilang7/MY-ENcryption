package com.nit.cfgs;


import java.util.Arrays;

import org.springframework.beans.factory.annotation.Qualifier;
import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.ComponentScan;
import org.springframework.context.annotation.Configuration;

import com.nit.sbeans.BookMyShowService;
import com.nit.sbeans.BookingService;
import com.nit.sbeans.MoviesBookingApplication;

@Configuration
@ComponentScan(basePackages = "com.nit.sbeans")
public class AppConfig 
{
	@Bean(name = "bookmyshow")
	public BookMyShowService getBookMyShowService()
	{
		BookMyShowService bookMyShowService= new BookMyShowService();
		bookMyShowService.setCinemaName("PVR Cinema");
		bookMyShowService.setLocation("panjagutta");
		bookMyShowService.setLocation("PVR 123");
		bookMyShowService.setAvailableShows(Arrays.asList("RRR","PK","PUSPA"));
		return bookMyShowService;
		
	}
	
	@Bean(name = "inoxservie")
	public BookMyShowService getInoxService()
	{
		BookMyShowService in= new BookMyShowService();
		in.setCinemaName("PVR Cinema inox");
		in.setLocation("panjagutta");
		in.setLocation("PVR 123");
		in.setAvailableShows(Arrays.asList("RRR","PK","PUSPA"));
		return in;
		
	}
	
	@Bean
	public MoviesBookingApplication getInstance(@Qualifier("bookmyshow") BookingService service)
	{
		return new MoviesBookingApplication(service);
		
	}
	
	

}
