package day;

import java.util.TreeSet;

//Program 02 :
//------------
//Create a record called Book which take two components name and author.
//
//Implement this Book record with Comparable interface to sort the books based on the name using compareTo() method.
//
//Create an ELC class BookSorted which will sort the book based on the name.
//
//Create one TreeSet object which will hold Book as a custom object.
//
//Insert 5 book records using custom object.
//
//Display all the books sorted in alphabetial order.

record Book(String name, String author) implements Comparable<Book>
{

	@Override
	public int compareTo(Book o) {

		return 0;
	}

}
public class BookSorted
{
     public static void main(String[] args)
     {
		Book b1 = new Book("baba", "harsh");
		Book b2 = new Book("aj", "rock");
		Book b3 = new Book("vj", "star");
		Book b4 = new Book("kk", "singer");
		Book b5 = new Book("cc", "avi");

		TreeSet<Book> listOfBook= new TreeSet<Book>((p,p2)-> p.name().compareTo(p2.name()));
		listOfBook.add(b4);
		listOfBook.add(b2);
		listOfBook.add(b5);
		listOfBook.add(b1);
		listOfBook.add(b3);

		listOfBook.forEach(System.out::println);
System.out.println("----------------");
		TreeSet<Book> listOfBookn= new TreeSet<Book>((p,p2)-> p2.name().compareTo(p.name()));
		listOfBookn.add(b4);
		listOfBookn.add(b2);
		listOfBookn.add(b5);
		listOfBookn.add(b1);
		listOfBookn.add(b3);

		listOfBook.forEach(System.out::println);

	}
}
