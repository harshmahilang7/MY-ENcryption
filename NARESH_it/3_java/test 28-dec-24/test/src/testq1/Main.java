package testq1;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("enter the string ");
		String lang=sc.nextLine();
		Language l1=FactoryClass.factory(lang);
		System.out.println(l1.getMessage());
		sc.close();

	}

}
