package q1;

import java.util.Arrays;
import java.util.Comparator;
import java.util.List;
import java.util.Optional;

public class q7 {

	public static void main(String[] args) {
		List<Integer> asList = Arrays.asList(5, 12, 3, 8, 1, -9, 6);
		Optional<Integer> min = asList.stream().min(Comparator.naturalOrder());
		Optional<Integer> max = asList.stream().max(Comparator.naturalOrder());
		
		
		
//		Optional<Integer> max = asList.stream().min(Comparator.naturalOrder());
		min.ifPresentOrElse(System.out::println,() -> System.out.println("i am not persent"));
		
		
		
		
		
		
		
		
	}
}
