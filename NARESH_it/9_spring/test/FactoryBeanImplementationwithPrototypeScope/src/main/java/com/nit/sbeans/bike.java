package com.nit.sbeans;

import org.springframework.stereotype.Component;

@Component
public class bike implements Vehicle
{
	public void run(){
		System.out.println("bike is runing ");
	}
}
