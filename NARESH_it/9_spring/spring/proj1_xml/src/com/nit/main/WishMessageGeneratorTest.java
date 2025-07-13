package com.nit.main;

import org.springframework.context.support.FileSystemXmlApplicationContext;

import com.nit.beans.WishMessageGenerator;

public class WishMessageGeneratorTest 
{

	public static void main(String[] args) 
	{ 
	 System.out.println("WishMessageGeneratorTest.main() start");

	 FileSystemXmlApplicationContext fsac = 
       new FileSystemXmlApplicationContext("src/com/nit/configs/applicationContext.xml");
	
	 WishMessageGenerator wmg = (WishMessageGenerator)fsac.getBean("wmg");
	 
	 
	 System.out.println(wmg.findSeason());
	 System.out.println("WishMessageGeneratorTest.main() end");
	 fsac.close();
	 
	 
	}
}