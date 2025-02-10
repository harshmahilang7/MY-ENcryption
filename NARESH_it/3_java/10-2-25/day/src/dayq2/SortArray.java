package dayq2;

import java.util.Arrays;

public class SortArray {

	public static void main(String[] args) {
//		How to sort Array elements in ascending order using nested for loop.


		int arr[]= {1,3,6,3,6,132,54,23,4};

		for(int i=0;i<arr.length;i++)
		{
			for (int j = i+1; j < arr.length; j++) {
				 if (arr[i]>arr[j])
				 {
					 int temp=arr[j];
					 arr[j]=arr[i];
					 arr[i]=temp;
				 }

			}
		}

		System.out.println(Arrays.toString(arr));

	}

}
