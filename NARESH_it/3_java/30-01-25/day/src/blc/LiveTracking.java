package blc;

public class LiveTracking implements Runnable {

//	d) run() method implementation for LiveTracking class
//Here you should write the logic to update the ride location in % [See the
//output Test cases for more details]
//After that it should print a message "Ride Completed".
	@Override
	public void run() {
		// TODO Auto-generated method stub
		System.out.println("Updating ride location... 20% completed\r\n");
		try {
			Thread.sleep(1000);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		System.out.println("Updating ride location... 40% completed\r\n");
		try {
			Thread.sleep(1000);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		System.out.println("Updating ride location... 60% completed\r\n");
		try {
			Thread.sleep(1000);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		System.out.println("Updating ride location... 80% completed\r\n");
		try {
			Thread.sleep(1000);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		System.out.println("Updating ride location... 100% completed\r\n");
		try {
			Thread.sleep(1000);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		System.out.println("Ride Completed");

	}

}
