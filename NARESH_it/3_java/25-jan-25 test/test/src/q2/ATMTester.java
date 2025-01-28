package q2;

public class ATMTester {

	public static void main(String[] args) {
		ATM a1= new ATM(3000,"1234567890");
		try {
			a1.depost(100);
			System.out.println(a1.getAccountBalance());
			a1.withdraw(0);
			System.out.println(a1.getAccountBalance());
			ATM.validateAccount("12345678908");
		} catch (InsufficientBalanceException | InvalidAccountException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

}
