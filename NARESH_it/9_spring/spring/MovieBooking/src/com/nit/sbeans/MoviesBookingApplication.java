package com.nit.sbeans;

import com.nit.exception.MovieNotFoundException;
import com.nit.exception.invalidBookingException;

public class MoviesBookingApplication 
{
	BookingService service;

	public MoviesBookingApplication(BookingService service) {
		super();
		this.service = service;
	}
	
	
	public void book(String movieName) throws MovieNotFoundException, invalidBookingException 
	{
		service.bookTicket(movieName);
		
	}
	public void cancel(String movieName) throws invalidBookingException 
	{
		service.cancalTicket(movieName);
		
	}
	public void show() throws MovieNotFoundException 
	{
		service.viewShow();
		
	}

}
