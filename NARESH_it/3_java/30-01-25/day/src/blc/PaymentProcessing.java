package blc;

public class PaymentProcessing implements Runnable {

	@Override
	public void run() {
		try {
			System.out.println("Processing payment...!");
			Thread.sleep(2000);
			System.out.println("Payment successful!");
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}

	}

}
