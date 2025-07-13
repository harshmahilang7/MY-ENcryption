package com.nit.sbean;

import lombok.Setter;

@Setter
public class Laptop 
{
	String brand;
	int storageSizeGB;
	public Laptop(String brand) {
		super();
		this.brand = brand;
	}
	@Override
	public String toString() {
		return "Laptop [brand=" + brand + ", storageSizeGB=" + storageSizeGB + "]";
	}
	
	
	

}
