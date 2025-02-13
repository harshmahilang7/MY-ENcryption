package day;

import java.util.Arrays;
import java.util.stream.DoubleStream;

public class q3 {
	public static void main(String[] args) {
//		Create a double array, convert the double array into Stream and print the elements of double array by using Stream forEach() method.

		double doubleArr[]= {21.9d,42.5d,34.6d};
		DoubleStream doubleStream = Arrays.stream(doubleArr);
		
		System.out.println(doubleStream.toString());
		
		
		doubleStream.forEach(n -> System.out.println(n));
		
	}

}
