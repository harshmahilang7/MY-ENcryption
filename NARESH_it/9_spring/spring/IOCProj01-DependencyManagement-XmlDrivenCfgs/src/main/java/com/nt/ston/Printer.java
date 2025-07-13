package com.nt.ston;

import org.springframework.stereotype.Component;



@Component("printer")
public class Printer 
{

	private static Printer INSTANCE;

	private Printer() {
		System.out.println("Printer:: 0-param constructor");
	}
	
	public static Printer getInstance()
	{
		System.out.println("Printer.getInstance()");
		if(INSTANCE==null)
			INSTANCE= new Printer();
		return INSTANCE;
	}
	
	//b.method
	public void printData(String msg) 
	{ 
		System.out.println("Printer.printDate() (B.METHOD)");
		System.out.println(msg);	
	}	
	
}
