package q1;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.stream.Stream;

public class q4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		 
		List<Integer> i1 =new ArrayList<Integer>(Arrays.asList(-3, 2, -5, 6, -1, 4));
		
		int stream = i1.stream().filter(num -> num>0).mapToInt(num -> num*num).sum();
		System.out.println(stream);
	

	}

}
