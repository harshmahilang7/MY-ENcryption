package com.nit.bean;

import lombok.Getter;
import lombok.Setter;

@Setter
@Getter
public class Car 
{
	Engine e;

	@Override
	public String toString() {
		return "Car [e=" + e + "]";
	}
	

}
