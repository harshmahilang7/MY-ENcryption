package day;


import java.util.Arrays;
//import java.util.Scanner;

public class ContainAa {

	public static void main(String[] args) {
	    String[] names = {"Rahul", "Raj", "Arnav", "Scott", "Smith"};
//	    Scanner sc= new Scanner(System.in);

	    Arrays.stream(names).filter(ContainAa::AaContain).forEach(str -> System.out.println(str));

//	    System.out.println(Arrays.toString(array));


	}

	public static boolean AaContain(String s)
	{
		int len=s.length();
		for (int i = 0; i < len; i++) {
			if(s.charAt(i)=='A'||s.charAt(i)=='a')
			{
				return true;
			}

		}
		return false;
	}
}
