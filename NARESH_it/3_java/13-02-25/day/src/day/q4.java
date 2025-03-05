package day;

import java.util.Arrays;
import java.util.stream.Stream;

public class q4 {

	public static void main(String[] args) {
//		 Create a String array, convert the String array into Stream and print the elements of String array by using Stream forEach() method.

		String str[]= {"harsh","arsh","dastan"};
		Stream<String> strStream = Arrays.stream(str);
		
		strStream.forEach(n -> System.out.println(n));
		
	}

}
