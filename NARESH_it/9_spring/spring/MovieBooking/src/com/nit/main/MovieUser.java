package com.nit.main;

import java.util.Scanner;

import org.springframework.context.annotation.AnnotationConfigApplicationContext;

import com.nit.cfgs.AppConfig;
import com.nit.exception.MovieNotFoundException;
import com.nit.exception.invalidBookingException;
import com.nit.sbeans.MoviesBookingApplication;

public class MovieUser {

	public static void main(String[] args) {
		AnnotationConfigApplicationContext ctx= new AnnotationConfigApplicationContext(AppConfig.class);
		MoviesBookingApplication app = ctx.getBean(MoviesBookingApplication.class);
		while (true) {
			Scanner sc = new Scanner(System.in);
			System.out.println("enter the option");
			System.out.println("1.book tiket");
			System.out.println("2.cancel tiket");
			System.out.println("3.view all show");
			int op = sc.nextInt();
			try(sc){
				switch (op) {
				case 1: {
					sc.nextLine();
					System.out.println("enter the movies name:");
					String mn = sc.nextLine();
					app.book(mn);
					break;
				}
				case 2: {
					System.out.println("enter the movies name:");
					String mn = sc.nextLine();
					app.cancel(mn);
					break;
				}
				case 3: {
					
					app.show();
					break;
				}
				default:
				{
					System.out.println("exiting");
					System.exit(0);
				}
				}
			} catch (MovieNotFoundException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			} catch (invalidBookingException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			} 
			
		}

	}

}
