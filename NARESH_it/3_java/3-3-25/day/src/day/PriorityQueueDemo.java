package day;
import java.util.*;
//Create a Java program that uses a PriorityQueue to manage a collection of strings. 
//You need to implement the following functionality:
//
//Initialize a PriorityQueue that stores strings.
//Add five different colors ("Red", "Green", "Orange", "White", "Black") to the queue.
//Print all elements of the priority queue.
//
//Requirements:
//--------------------
//Your program should use the PriorityQueue class from the java.util package.
//The elements should be added in the specified order: "Red", "Green", "Orange", "White", "Black".
//Display the elements of the PriorityQueue after all elements have been added.
//-------------------------------------------------------------------------------------------------------
public class PriorityQueueDemo {
	
	public static void main(String[] args) {
		
		
		 String[] colorOrder={"Red", "Green", "Orange", "White", "Black"};
		
		PriorityQueue<String> q1=new PriorityQueue<>(Comparator.comparingInt(Arrays.asList(colorOrder)::indexOf));
		
		
		
		
		
		

		q1.add("Red");
		
		
		
	
		q1.add("Orange");
		q1.add("White");
		
		q1.add("Green");
		q1.add("Black");
		
//		q1.forEach(e -> System.out.println(e));
		
//		
//		
//		PriorityQueue<String> q2= new PriorityQueue<String>();
//		q2.add("Pink");
//		q2.add("White");
//		q2.add("Black");
//		
//		PriorityQueue<String> q3= new PriorityQueue<String>();
//		q2.add("Black");
//		q2.add("White");
//		q2.add("Pink");
//		
//		q2.addAll(q3);
//		System.out.println(q2);
		
		PriorityQueue<String> q2= new PriorityQueue<String>();
		q2.add("Black");
		q2.add("Green");
		q2.add("Red");
		q2.add("White");
		
		PriorityQueue<String> q3= new PriorityQueue<String>();
		q3.add("Black");
		q3.add("Orange");
		q3.add("Pink");
		q3.add("Red");
		
		for (String string : q2) 
		{
			for (String string2 : q3) {
				if(string.equalsIgnoreCase(string2))
				{
					System.out.println("yes");
					break;
				}
				else
				{
					System.out.println("no");
				}
			}
		}
		
		for (String string : q2) 
		{
	
				if(q3.contains(string))
				{
					System.out.println("yes");
				}
				else
				{
					System.out.println("no");
				}
		}
		
	}

}
