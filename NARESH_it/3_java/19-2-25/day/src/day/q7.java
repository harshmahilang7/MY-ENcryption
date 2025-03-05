package day;

import java.util.Arrays;

//Q7) WAP to convert Integer Array to String Representation
//
//Integer[] numbers = {10, 20, 30, 40, 50};
//Converted Strings: [Number: 10, Number: 20, Number: 30, Number: 40, Number: 50]
public class q7 {
	public static void main(String[] args) {
		Integer[] numbers = {10, 20, 30, 40, 50};

		Arrays.stream(numbers).map(num -> "number :"+num).forEach(System.out::println);
		Object[] array = Arrays.stream(numbers).map(num -> "number :"+num).toArray();

		System.out.println(Arrays.toString(array));
	}

}
