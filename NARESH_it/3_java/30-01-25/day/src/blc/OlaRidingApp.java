package blc;

public class OlaRidingApp {
	public static void main(String[] args) throws InterruptedException {
		RideRequest rr=new RideRequest()
		{
			@Override
			public void run()  {
				System.out.println("User requested a ride...");
				try {
					Thread.sleep(2000);
				} catch (InterruptedException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}

				System.out.println("Searching for nearby drivers...");


			}
		};
		DriverAssignment da=new DriverAssignment();
		FareCalculation  fc= new FareCalculation();
		LiveTracking lt=new LiveTracking();
		PaymentProcessing pp=new PaymentProcessing();
		RatingSystem rs=new RatingSystem();

		Thread t=new Thread(rr);
		t.start();


		Thread t2=new Thread(fc);
		t2.start();

		t.join();


		da.start();

		da.join();

		Thread t3=new Thread(lt);
		t3.start();

		t3.join();

		Thread t4=new Thread(pp);
		t4.start();

		t4.join();

		Thread t5=new Thread(rs);
		t5.start();

		t5.join();


	}


}
