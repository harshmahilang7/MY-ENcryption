package day5;

public class Main {
	public static void main(String[] args) {

//Q5) Find Common Elements in Two Arrays.
//
//    int[] arr1 = {1, 3, 4, 7, 9, 10};
//    int[] arr2 = {2, 3, 7, 6, 9, 12};
//
//   3 7 9
		
		int[] arr1 = {1, 3, 4, 7, 9, 10};
		 int[] arr2 = { 2, 3, 7, 6, 9, 12};
		 System.out.print("Common elements: ");
		 for (int i = 0; i < arr1.length; i++) {
			for (int j = 0; j < arr2.length; j++) {
				if(arr1[i]==arr2[j])
				{
					System.out.print(arr1[i]+" ");
				}
				
			}
			
		}

	}

}
