package com.nit.sbeans;

import java.util.List;

import com.nit.exception.MovieNotFoundException;
import com.nit.exception.invalidBookingException;

public class InoxService implements BookingService{
	
	
	private  String cinemaName;
	private  String location;
	private  String partnerCode;
	private List<String> availableShows;
	private List<String> bookedTickets;
	

	
	
	
	public String getCinemaName() {
		return cinemaName;
	}
	public void setCinemaName(String cinemaName) {
		this.cinemaName = cinemaName;
	}
	public String getLocation() {
		return location;
	}
	public void setLocation(String location) {
		this.location = location;
	}
	public String getPartnerCode() {
		return partnerCode;
	}
	public void setPartnerCode(String partnerCode) {
		this.partnerCode = partnerCode;
	}
	public List<String> getAvailableShows() {
		return availableShows;
	}
	public void setAvailableShows(List<String> availableShows) {
		this.availableShows = availableShows;
	}
	public List<String> getBookedTickets() {
		return bookedTickets;
	}
	public void setBookedTickets(List<String> bookedTickets) {
		this.bookedTickets = bookedTickets;
	}
	@Override
	public void bookTicket(String movieName ) throws MovieNotFoundException, invalidBookingException {
		System.out.println("InoxService.bookTicket()");
		if (availableShows.contains(movieName)) 
		{
			bookedTickets.add(movieName);
			System.out.println("ticket Booked Succesfully ");
			
		}
		else
		{
			throw new MovieNotFoundException("the show is not avi");
		}
		
	}
	@Override
	public void cancalTicket(String movieName) throws invalidBookingException {
		if (availableShows.contains(movieName)) 
		{
			bookedTickets.remove(movieName);
			System.out.println("tocket deleted ");
			
		}
		else
		{
			throw new invalidBookingException("ivliad nooking prrocess");
		}
		
	}
	@Override
	public void viewShow() throws MovieNotFoundException {
		System.out.println("movies avilable");
		availableShows.forEach(System.out::println);
	}
}
