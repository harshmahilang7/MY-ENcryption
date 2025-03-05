package day;

import java.util.Arrays;

//Q8) WAP to convert all the names of String array into uppercase
//
//String[] names = {"Virat", "Sanju", "Rohit", "Bumrah"};
//
//Output : [VIRAT, SANJU, ROHIT, BUMRAH]

public class q8 {
public static void main(String[] args) {
	String[] names = {"Virat", "Sanju", "Rohit", "Bumrah"};

	Object[]  arr= Arrays.stream(names).map(str -> str.toUpperCase()).toArray();
	System.out.println(Arrays.toString(arr));

}
}
