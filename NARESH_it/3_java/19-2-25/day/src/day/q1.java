package day;

import java.util.Arrays;

//Q1) WAP to remove Negative Numbers from an Integer Array.

//Integer[] numbers = {-10, -5, 0, 5, 10, 15, -20};

//Output : Positive Numbers: [5, 10, 15]
public class q1 {

	public static void main(String[] args) {
		Integer[] numbers = {-10, -5, 0, 5, 10, 15, -20};

		Arrays.stream(numbers).filter(num -> num>0).forEach(num -> System.out.println(num));
	}

}
