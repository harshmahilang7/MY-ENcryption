package dayQ3;

public class second_largest_element_in_array{

	public static void main(String[] args) {
//		 Find the second largest element in the array.
		int arr[]= {1,3,6,3,6,132,54,23,4};
		int max=0;
		int secondMax=0;
		for(int i=0;i<arr.length;i++)
		{
			if(arr[i] > max)
			{
				secondMax = max;
				max=arr[i];
			}
			else if (arr[i] > secondMax && arr[i] != max)
			{
	                secondMax = arr[i];
	        }
		}

		System.out.println("max : "+max);
		System.out.println("secondMax : "+secondMax);


	}

}
