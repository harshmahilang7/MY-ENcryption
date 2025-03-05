package day;

import java.util.Optional;
import java.util.Scanner;
import java.util.stream.Stream;

public class EvenNumbers
{
    public static void main(String[] args)
    {
    	Scanner sc=new Scanner(System.in);
        int size=sc.nextInt();
        Integer a[]=new Integer[size];
        for(int i=0;i<size;i++)
        {
            a[i]=sc.nextInt();
        }
        
//        Stream.of(a).filter(num -> num %2==0).map(num -> num* num).forEach(System.out::println);
        Optional<Integer> n =Stream.of(a).filter(num -> num>=0).map(num -> num*num)
        		.reduce((x,num) -> x+num);
        n.ifPresent(num -> System.out.println(num));
    
    }
}