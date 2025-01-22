package com.exception;

@SuppressWarnings("serial")
public class CarStoppedException extends Exception
{
	public CarStoppedException() {

	}
	public CarStoppedException(String msg) {
		super(msg);
	}

}
