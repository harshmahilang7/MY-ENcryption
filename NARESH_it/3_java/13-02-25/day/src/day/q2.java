package day;

import java.util.Arrays;
import java.util.stream.LongStream;

public interface q2 {

	public static void main(String[] args) {
//		create a long array, convert the long array into Stream and print the elements of long array by using Stream forEach() method.
		
		long longArr[]= {1l,3l,6l,8l};
		
		LongStream longStream = Arrays.stream(longArr);

		System.out.println(longStream);
		longStream.forEach(n-> System.out.println(n));
		
	}
}
