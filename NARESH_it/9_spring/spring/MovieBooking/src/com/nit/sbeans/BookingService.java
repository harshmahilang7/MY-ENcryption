package com.nit.sbeans;

import com.nit.exception.MovieNotFoundException;
import com.nit.exception.invalidBookingException;

public interface BookingService 
{
	
 void bookTicket(String movieName )throws MovieNotFoundException ,invalidBookingException;
 
 void cancalTicket(String movieName )throws invalidBookingException;
 
 void viewShow()throws MovieNotFoundException;
 
 
}
