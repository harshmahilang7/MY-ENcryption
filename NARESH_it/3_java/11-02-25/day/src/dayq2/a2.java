package dayq2;

import java.util.Arrays;

public class a2 {
	public static void main(String[] args) {
		int[] arr = {1, 2, 3, 5, 6}; 
		int mid=4;
		int[] newArr=new int[arr.length+1];
		int pos=arr.length/2;
		
		for(int i=0,j=0;i<arr.length+1;i++)
		{
			if(i==pos)
			{
				newArr[pos]=mid;
			}
			else 
			{
				newArr[i]=arr[j++];
			}
		}
		
		
		System.out.println(Arrays.toString(newArr));
		
	}

}
