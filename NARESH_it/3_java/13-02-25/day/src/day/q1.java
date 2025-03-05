package day;

import java.util.Arrays;
import java.util.stream.IntStream;
import java.util.stream.Stream;

//void  acpet (T x)

public class q1 
{

	
//	Q1) Create an integer array, convert the integer array into Stream and print the elements of integer array by using Stream forEach() method.

	public static void main(String[] args) {
		int intArr[]= {1,2,3,4,5};
		
		IntStream streamarr = Arrays.stream(intArr);
		int sum = streamarr.sum();
		

		System.out.println(streamarr);
		System.out.println(sum);
		
		
//		streamarr.forEach(n -> System.out.println(n));
		
	}

	
	
}
