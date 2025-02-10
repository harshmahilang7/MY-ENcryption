package day;

public class a1 {


//	Search for a given Element in an Array if present then print
//	"Element found at index : ", if not present print "Element not found"
//
//	Input as: 1 4 3 5 2 6 5
//	Enter searching element: 5
//	Output: Element found at index 3
//
//	Input as: 1 4 3 5 2 6
//	Enter searching element: 7
//	Output: Element not found

	public static void main(String[] args) {
		int[] arr= {1,2,3,4,5,6};
		int ele=5;
		int index=0;
		for(int i=0;i<arr.length;i++)
		{
			if(arr[i]==ele)
			{
				index=i;
				break;
			}

		}
		if(index!=0)
		{

			System.out.println("the "+ele+" position is "+index);
		}
		else
		{
			System.out.println("not found");
		}
	}

}
