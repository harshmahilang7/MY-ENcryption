package blc;

public class FareCalculation implements Runnable {

	@Override
	public void run() {
		System.out.println("Calculating estimated fare...");
		try {
			Thread.sleep(1500);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		System.out.println("Estimated fare: 135.75 RS.");

	}

}
