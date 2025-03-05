package q1;

import java.util.stream.Collector;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class q2 {
	public static void main(String[] args) {
		Stream<String> string_Single = Stream.of("Hello", "", "World", " ", "from", " ", "Java", "!" );
		

		System.out.println(string_Single.filter(s -> !s.isEmpty()).collect(Collectors.joining()));
	}

}
