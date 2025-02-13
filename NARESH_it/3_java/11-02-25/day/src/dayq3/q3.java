package dayq3;

import java.util.Iterator;

public class q3 {
	public static void main(String[] args) {
//		 Find Pairs with a Given Sum
//		    Problem: Find all pairs (x, y) in the array where x + y = targetSum
//
//		     int[] arr = {2, 7, 4, 8, 3, 5, 1, 6};
//		     int targetSum = 9;
//
//		     Pairs with sum 9:
//		     (2, 7)
//		     (4, 5)
//		     (8, 1)
//		     (3, 6)
		
		int[] arr = {2, 7, 4, 8, 3, 5, 1, 6};
		int targetSum = 9;
		
		for (int i = 0; i < arr.length; i++) {
			for (int j = i+1; j < arr.length; j++) {
				if (arr[i]+arr[j]==targetSum) 
				{
				    System.out.println(arr[i]+" "+arr[j]);	
				}
				
			}
			
		}
		

		
	}

}
