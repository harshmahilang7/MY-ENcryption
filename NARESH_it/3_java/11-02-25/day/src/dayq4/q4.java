package dayq4;

public class q4 {
//	Q4) Find the Smallest and Largest Elements in an Array.
//int[] arr = {15, 3, 7, 22, 5, 9, 12};
//
//Smallest element: 3
//Largest element: 22

	public static void main(String[] args) {
		int[] arr = {15, 3, 7, 22, 5, 9, 12};
	
		int max=0;
		
		for (int i = 0; i < arr.length; i++) 
		{
			if(arr[i]>max)
			{
				max=arr[i];
			}
		}
		int sm=max;
		for (int i = 0; i < arr.length; i++) 
		{
			if(arr[i]<sm)
			{
				sm=arr[i];
			}
		
		}
		
		System.out.println("sm"+sm);
		System.out.println("max"+max);
			
		}
	}

