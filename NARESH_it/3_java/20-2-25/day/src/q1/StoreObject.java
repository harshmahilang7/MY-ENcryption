package q1;

import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectOutputStream;
import java.util.Scanner;

public class StoreObject {

	public static void main(String[] args) throws IOException
	{
		var fop= new FileOutputStream("C:\\Users\\harsh\\OneDrive\\Desktop\\object\\student.txt");
		var oos = new ObjectOutputStream(fop);

		Student sobj=  null;


		Scanner sc  = new Scanner(System.in);

		try(fop;oos;sc)
		{
			System.out.println("How many student objects you want to create: ");
			int o = sc.nextInt();

			for (int i = 0; i <o; i++) {
				sobj=Student.getStudentObject();
				oos.writeObject(sobj);

			}

			System.out.println("object's stored successfully");

		} catch (Exception e) {
			e.printStackTrace();
		}


	}

}
