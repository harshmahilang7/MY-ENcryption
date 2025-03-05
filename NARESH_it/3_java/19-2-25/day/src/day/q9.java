package day;

import java.util.Arrays;

public class q9 {
//	Q9) WAP to convert boolean value to "Yes" or "No"
//
//Boolean[] flags = {true, false, true, false, true};
//
//Yes/No Values: [Yes, No, Yes, No, Yes]


public static void main(String[] args) {
	Boolean[] flags = {true, false, true, false, true};
	Object[] array = Arrays.stream(flags).map(n ->
	{
		if(n==true)
			return "yes";
     	else
     		return "No";
	}).toArray();

	System.out.println(Arrays.toString(array));

}


}
