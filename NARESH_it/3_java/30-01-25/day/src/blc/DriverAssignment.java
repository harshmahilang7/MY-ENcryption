package blc;

public class DriverAssignment extends Thread{
	@Override
	public void run()
	{
try {
	Thread.sleep(3000);
	System.out.println("Driver found and assigned!");
} catch (InterruptedException e) {
	// TODO Auto-generated catch block
	e.printStackTrace();
}
	}

}
