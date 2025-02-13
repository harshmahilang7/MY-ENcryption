package dayq1;

import java.util.Arrays;
import java.util.Comparator;

public class CustomerComparator {

	public static void main(String[] args) {
		Customer c[]= new Customer[3];
		
//		-1   -> a
//		0 -e
//		1    -> d
		
		c[0]= new Customer(6, "harsh", 5000D);
		c[1]= new Customer(5, "xyz", 4000D);
		c[2]= new Customer(3, "dastan", 3000D);
		
		
		Comparator<Customer> sortId=new Comparator<Customer>() 
		{

			@Override
			public int compare(Customer o1, Customer o2) {
				
//				return o1.id().compareTo(o2.id());
				return o2.id()-o1.id();
//				return Integer.compare(o1.id(), o2.id());
				
//				          5 -  6 = -1
				
				        		  
			}
		};
		
		Arrays.sort(c,sortId);
		
		for (Customer customer : c) {
			System.out.println(customer);
		}
		
		
		Comparator <Customer> sortName=new Comparator<Customer>() 
		{

			@Override
			public int compare(Customer o1, Customer o2) {
				return o1.name().compareTo(o2.name());
			}
			
		};
		System.out.println("-----------------------------");
	    Arrays.sort(c,sortName);
		
		for (Customer customer : c) {
			System.out.println(customer);
		}
		
		Comparator<Customer> SortBill = new Comparator<Customer>() {
			
			@Override
			public int compare(Customer o1, Customer o2) {
				return o1.bill().compareTo(o2.bill());
			}
		};
		System.out.println("------------------");
Arrays.sort(c,SortBill);
		
		for (Customer customer : c) {
			System.out.println(customer);
		}
		
		
		
		
	}

}
