package blc;

public  class RatingSystem implements Runnable {


	@Override
	public void run() {
		try {
			System.out.println("Requesting user rating...");
			Thread.sleep(1000);
			System.out.println("User rated the ride: 5 star");
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}

	}

}
