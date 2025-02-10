package day;

public class a5 {
public static void main(String[] args) {
//	Write a java program to find the middle elements of a given array.
//	If array is odd then print only the middle element, if array is even
//	then print both the middle elements.
//
//	Input as : 1 2 3 4 5
//	Output is : 3
//
//	Input is :1 2 3 4 5 6
//	Output is :3 4

	int arr[]= {1,2,3,4,5};
	if(arr.length%2==0)
	{
			System.out.println(arr[(arr.length/2)-1]+"  "+arr[(arr.length/2)]);
	}
	else
	{
		System.out.println(arr[(arr.length/2)]);
	}

}
}
