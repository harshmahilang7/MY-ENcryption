package com.nit.profilemodel;

import org.springframework.stereotype.Component;

@org.springframework.context.annotation.Profile("dev")
@Component
public class Profile 
{
	public void dev() 
	{
		System.out.println("Profile.dev()");
	}
	
	
}
