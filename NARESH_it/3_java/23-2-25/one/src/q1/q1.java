package q1;

import java.util.stream.Stream;

public class q1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Stream<Integer> inte = Stream.of(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
		
		inte.forEach(num -> System.out.println(num));
	}

}
