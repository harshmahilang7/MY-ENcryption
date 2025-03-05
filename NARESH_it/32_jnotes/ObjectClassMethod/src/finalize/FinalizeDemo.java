package finalize;

public class FinalizeDemo {

	public static void main(String[] args) throws InterruptedException {
		Product p1= new Product(11, "dell", 200D);
		System.out.println(p1);
		p1=null;
		System.gc();  //Calling garbage collector explicitly
		Thread.sleep(5000);
		System.out.println(p1);

	}

}
