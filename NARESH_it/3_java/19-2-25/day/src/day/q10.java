package day;

import java.util.Arrays;

public class q10 {
//	10) WAP to extract First Letter of Each Word from String Array
//
//String []names = {"James", "Aryan", "Vibha", "Aniket"};
//
//First Letters: [J, A, V, A]

public static void main(String[] args) {
	String []names = {"James", "Aryan", "Vibha", "Aniket"};
	Object[] array = Arrays.stream(names).map(n -> n.charAt(0)).toArray();
	System.out.println(Arrays.toString(array));
}
}
