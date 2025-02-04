package itcproject;

public class Account {
	private int balance = 0;
//	   Create a synchronized method withdraw :
//		    Name of the method : withdraw
//		    modifier : public
//		    Parameter : int amount
//
//		    Inside this method write the logic to verify that current balance should not
//		    be less than withdraw amount by using while loop, if the current balance is
//		    less than withdraw amount then put the current thread into wait method.
//
//		    Inside the method write the logic to withdraw the amount if balance is
//		    not less than withdraw amount and print the updated balance.
//
//		    notify any other thread which are waiting on the same object for the lock.
	      synchronized public  void withdraw(int amount) throws InterruptedException
	     {
	    	  	while(balance<amount)
	    	  	{
	    	  		System.out.println("first have to deposit");
	    	  		this.wait();
	    	  	}
	    	  	balance=balance-amount;
	    	  	notify();
	     }

//
//	      2) Create a synchronized method deposit
//	      Name of the method : deposit
//	      modifier : public
//	      Parameter : int amount
//
//	      In this method write the logic to deposit the amount, print the updated
//	      balance, notify the waiting thread which is waiting for withdraw the
//	      amount.

	      synchronized public  void deposit(int amount) throws InterruptedException
		     {
		    	  	balance=balance+amount;
		    	  	notify();
		     }

		public int getBalance() {
			return balance;
		}

//		public void setBalance(int balance) {
//			this.balance = balance;
//		}



}
