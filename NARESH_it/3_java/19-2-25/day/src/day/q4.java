package day;
//Q4) WAP to print all the names from String array where the length of the
//name must be greater than 3.
//
//String[] words = {"Raj", "Rohit", "Smirti", "Richa", "Sky"};
//Output : [Rohit, Smirti, Richa]

import java.util.Arrays;

public class q4 {

	public static void main(String[] args) {
		String[] words = {"Raj", "Rohit", "Smirti", "Richa", "Sky"};

		Arrays.stream(words).filter(str -> str.length()>3).forEach(str -> System.out.println(str));
	}



}
