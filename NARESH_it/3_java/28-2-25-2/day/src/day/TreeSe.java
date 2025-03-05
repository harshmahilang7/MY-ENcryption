package day;

import java.util.TreeSet;
import java.util.stream.Stream;

//Create a record called Product which is accepting two components pid and pname.
//
//Write one compact constructor to throw IllegalArgumentException if pid is zero or Negative.
//
//Create one TreeSet class which will hold the Custom product object.
//
//With the help of TreeSet constructor using Comparator interface, write the logic to sort the Product data on the following basis
//
//1) Sort based on the pid in ascending order.
//2) Sort based on the pid in descending order.
//3) Sort based on the name in Alphabetical order.
//4) Sort based on the name in Reverse order.

record Product(Integer pid,String name) implements Comparable<Product>
{
	Product(Integer pid,String name)
	{
		if(pid<=0)
		{
			throw new IllegalArgumentException();
		}
		else
		{
			this.name = name;
			this.pid = pid;
		}
	}

	@Override
	public int compareTo(Product o) {
		return this.pid.compareTo(o.pid);
	}

}
public class TreeSe {
	public static void main(String[] args) {
		Product p1= new Product(1, "lap");
		Product p2= new Product(2, "cvbn");
		Product p3= new Product(3, "hjkl");
		Product p4= new Product(4, "iop");


		TreeSet<Product> setT = new TreeSet<Product>();
		setT.add(p1);
		setT.add(p4);
		setT.add(p2);
		setT.add(p3);
		setT.forEach(System.out::println);

		System.out.println("---------------------");
		TreeSet<Product> setT1 = new TreeSet<Product>((i1,i2)-> i2.name().compareTo(i1.name()));
		setT1.add(p1);
		setT1.add(p4);
		setT1.add(p2);
		setT1.add(p3);
		setT1.forEach(System.out::println);
//		Stream<Product> products = Stream.of(p1,p2,p3,p4);
//		Arrays.stream(arr);
//
//		products.sorted((i1,i2)-> i1.pid().compareTo(i2.pid())).forEach(System.out::println);

//		products.sorted((i1,i2)-> i2.pid().compareTo(i1.pid())).forEach(System.out::println);


//
//		products.sorted((i1,i2)-> i1.name().compareTo(i2.name())).forEach(System.out::println);
//
//		products.sorted((i1,i2)-> i2.name().compareTo(i1.name())).forEach(System.out::println);



	}



}
