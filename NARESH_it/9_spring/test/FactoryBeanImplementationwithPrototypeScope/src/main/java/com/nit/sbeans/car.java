package com.nit.sbeans;

import org.springframework.stereotype.Component;

@Component
public class car implements Vehicle {
	public void run(){
		System.out.println("car is runing ");
	}
}
