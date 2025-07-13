package com.nit.bean;

import lombok.Getter;
import lombok.Setter;

@Setter
@Getter
public class Engine 
{
	String type;

	@Override
	public String toString() {
		return "Engine [type=" + type + "]";
	}
	
}
