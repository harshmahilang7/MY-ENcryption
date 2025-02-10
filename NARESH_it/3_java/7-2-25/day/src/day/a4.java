package day;

import java.util.Arrays;

public class a4 {
	public static void main(String[] args) {
//		Que 4 :
//			=======
//			Write a java program to print all even elements and odd elements
//			separately from an array.
//
//			Input as  : 1 2 3 4 5 6 7
//			Even elements are : 2 4 6
//			Odd elements are : 1 3 5 7

		int arr[]= {1,2,3,4,5,6,7};
		int oddArr[]=new int[8];
		int evenArr[]=new int[8];
		int j=0;
		int k=0;

		for(int i=0;i<arr.length;i++)
		{
			if(arr[i]%2==0)
			{
				evenArr[j]=arr[i];
				j++;
			}
			else
			{
				oddArr[k]=arr[i];
				k++;
			}
		}

		System.out.println("orginal "+Arrays.toString(arr));
		System.out.println("oddArr"+Arrays.toString(oddArr));
		System.out.println("evenArr"+Arrays.toString(evenArr));
	}

}
