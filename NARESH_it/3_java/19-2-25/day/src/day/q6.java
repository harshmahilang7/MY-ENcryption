package day;

import java.util.Arrays;
import java.util.Collections;

//Q6) WAP to filter Palindrome Words from an Array.
//
//String[] words = {"madam", "hello", "racecar", "java", "level", "world"};
//
//Output : Palindrome Words: [madam, racecar, level]
public class q6 {

	public static void main(String[] args) {
		String[] words = {"madam", "hello", "racecar", "java", "level", "world"};

		Object[] array = Arrays.stream(words).filter(q6::palindrome).toArray();



		Object[] array2 = Arrays.stream(words).filter(word ->word.equals(new StringBuilder(word).reverse().toString())).toArray();


		System.out.println("palindrome words : "+Arrays.toString(array2));

	}
	public static boolean palindrome(String n)
	{
		int len=n.length();
		len--;
		for (int i = 0; i < len; i++)
		{
			if(n.charAt(i)!=n.charAt(len))
			{

				return false;
			}
			len--;
		}
		return true;


	}

}
