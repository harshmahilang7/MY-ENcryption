package com.nit.beans;

import java.time.LocalDate;


import lombok.Getter;
import lombok.Setter;
 
@Setter
@Getter
public class WishMessageGenerator {
 
	private LocalDate id;  

	public String findSeason() { 
		 String season = "";
       if(id!=null) {
    	   int month = id.getMonthValue();
    	  
    	   if(month>=11 || month<3) {
    		   season =  "Winter Season";
    	   }
    	   else if(month>=3 && month<=6) {
    		   season =  "Summer Season";
    	   }
    	   else {
    		   season =  "Rainy Season";
    	   }
       }
       
       return season; 
       
       
	}
} 