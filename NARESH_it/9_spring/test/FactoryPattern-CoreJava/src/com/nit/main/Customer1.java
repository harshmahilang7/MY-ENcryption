package com.nit.main;

import com.nit.factory.CarFactory;
import com.nit.sbean.ICar;

public class Customer1 
{
	public static void main(String[] args) {
		ICar instance = CarFactory.getInstance("luxory");
	}

}
