package day;

import java.util.stream.Stream;

public class OddNumbersuptogivenlimit {

	public static void main(String[] args) {
		 Stream.generate((Math::random)).limit(10).filter(num -> num%2!=0).map(num -> num*num).forEach(n -> System.out.println((int)(n*10)));

	}

}
