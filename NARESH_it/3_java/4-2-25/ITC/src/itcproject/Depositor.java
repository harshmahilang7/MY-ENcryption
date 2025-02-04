package itcproject;

public class Depositor extends Thread {
//	 Create another BLC class Depositor which extends from Thread class
//	    Instance Variable :
//	    private Account account;  //HAS-A Relation
//
//	    Initialize the Object properties by using parameterized constructor.
//
//	    Override run() method :
//	    inside run method create an array variable of type int deposits which
//	    will accept multiple amount in int value.
//
//	    create a for each loop to accept these integer value one by one and pass these
//	    value to deposit the amount. In each deposit process you should have 1 sec
//	    waiting period.

	private Account account;

	public Depositor(Account account) {
		super();
		this.account = account;
	}

	@Override
	public void run() {
		int[] deposits = {500,700,3000};

		for (int i : deposits) {
			try {
				Thread.sleep(1000);
				account.deposit(i);
				System.out.println(" deposits : "+account.getBalance()+" done ");
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}

		}

	}

}
