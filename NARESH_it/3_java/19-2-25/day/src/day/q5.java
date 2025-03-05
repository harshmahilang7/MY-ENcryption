package day;

import java.util.Arrays;

//Q5) WAP to print all the unique numbers from the Array.
//
//Integer[] numbers = {1, 2, 3, 4, 5, 2, 3, 6, 7, 8, 4};
//Output : Unique Numbers: [1, 2, 3, 4, 5, 6, 7, 8]
public class q5 {
	public static void main(String[] args) {
		Integer[] numbers = {1, 2, 3, 4, 5, 2, 3, 6, 7, 8, 4};

		Object[] array = Arrays.stream(numbers).distinct().toArray();

		System.out.println(Arrays.toString(array));

	}


}
