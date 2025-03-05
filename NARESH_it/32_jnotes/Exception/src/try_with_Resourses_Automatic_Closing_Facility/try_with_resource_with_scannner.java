package try_with_Resourses_Automatic_Closing_Facility;

import java.util.Scanner;

public class try_with_resource_with_scannner {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		sc.close();
		try(sc)
		{
			System.out.println("enter the number");
			int x=sc.nextInt();
			System.out.println("");
			
		}
		catch (Exception e) {
			
		}
		

	}

}
