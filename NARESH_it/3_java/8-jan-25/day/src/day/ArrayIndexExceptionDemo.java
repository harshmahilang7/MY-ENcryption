package day;

public class ArrayIndexExceptionDemo {
	public static void main(String[] args) {
		try {
			int []a = new int[2];
			a[6] = 8;
		} 
		catch (Exception e) 
		{
			
			System.out.println("be in limit");
			System.out.println(e. getMessage());
			System.out.println(e.toString());
			e.printStackTrace();
			
		}
	}

}
