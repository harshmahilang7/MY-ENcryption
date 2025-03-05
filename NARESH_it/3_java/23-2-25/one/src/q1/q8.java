package q1;

import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class q8 {
public static void main(String[] args) {

	List<Integer> asList1 = Arrays.asList(1, 2, 3, 4);
	List<Integer> asList2 = Arrays.asList(5, 6, 7, 8);
	List <Integer> l1 = Stream.concat(asList1.stream(), asList2.stream()).toList();
	System.out.println(l1);
	int sum = l1.stream().mapToInt(n -> n).sum();
	System.out.println(sum);
					 
}
}
