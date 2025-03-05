package q1;

import java.util.Arrays;
import java.util.List;
import java.util.stream.Collector;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class q5 {

	public static void main(String[] args) {
		
		List<String> str6 = Arrays.asList("Toby", "Anna", "Leroy", "Alex");
//		str6.stream().filter(str -> str.length()==4).map(
//				str -> str.chars().sorted().mapToObj(c -> String.valueOf((char) c )).collect(Collectors.joining("")))
//		.forEach(str -> System.out.println(str));
//		
//		str6.stream().filter(str -> str.length()==4).sorted().forEach(str -> System.out.println(str));
////
         str6.stream().filter(str -> str.length()==4).sorted().limit(2).forEach(System.out::println);		
	}
}

