package one;

import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.Scanner;

public class A {
	public static void main(String[] args)
	   {

	     Scanner sc= new Scanner(System.in);
	     int size=sc.nextInt();
	     
	     HashMap<Integer, String> hashMap = new HashMap<>();
	     LinkedHashMap<Integer, String> linkedHashMap = new LinkedHashMap<>();
	     
	     for (int i = 0; i < size; i++) {
	    	 Integer x= sc.nextInt();
	    	 String y= sc.next();
	    	 hashMap.put(x, y);
	    	 linkedHashMap.put(x, y);
			
		}
	     
	     System.out.println(hashMap);
	     System.out.println(linkedHashMap);
	     sc.close();
	  
	   }
}
