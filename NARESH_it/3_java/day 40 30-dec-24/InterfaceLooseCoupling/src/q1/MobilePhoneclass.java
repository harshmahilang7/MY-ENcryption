package q1;

import java.util.Scanner;

public class MobilePhoneclass implements MobilePhone {
	SIMCardInterface sim = null;
	Scanner sc=new Scanner(System.in);

	@Override
	public SIMCardInterface insertingSim() {
		// TODO Auto-generated method stub
		System.out.println("insertingSim");
		System.out.println("1 . airtel ");
		System.out.println("2 . JIO ");
		System.out.println("3 . BSNL ");
		int a = sc.nextInt();
		switch (a) {
		case 1:
			sim = new Airtel();
			System.out.println("SIM card inserted successfully");
			return sim;
		case 2:
			sim = new Jio();
			System.out.println("SIM card inserted successfully");
			return sim;
		case 3:
			sim=new BSNL();
			System.out.println("SIM card inserted successfully");
			return sim;
		default:
			System.out.println("SIM card inserted not successfully");
			break;
		}
		return sim=null;
		
	}

	@Override
	public void removeingSim() {
		// TODO Auto-generated method stub
//		sim = null;
		if(sim.isActivate() != false)
		{
			System.out.println("SIM card removed successfully.");
		}
		else
		{
			System.out.println("firstly insert the sim ");
		}
		

	}

	@Override
	public void makecalls(long num) {
		// TODO Auto-generated method stub
		System.out.println("makecalls");
		
		if (sim.isActivate() == false) {
			System.out.println("Error messages indicating no SIM card is inserted.");
		}
		else
		{
			sim.networkProvider();
			System.out.println("Making call to "+num+" using "+sim.gettingPhoneNumber());
		}
		

	}

	@Override
	public void sendingtext(long num) {
		// TODO Auto-generated method stub
		System.out.println("sendingtext");
		if (sim.isActivate() == false)
		{
			System.out.println("Error messages indicating no SIM card is inserted.");
		}
		else
		{
			sim.networkProvider();
			System.out.println("sending text to "+num+" using "+sim.gettingPhoneNumber());
			System.out.println("Message: Hello, this is a test message.");
		}

	}

}
