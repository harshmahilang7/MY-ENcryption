package itcproject;

public class ATMMachine {
//	Create an ELC class ATMMachine, inside main method create object as per
//	 requirement, start both the threads to see inter thread communication result
//	 -----------------------------------------------------------------------
public static void main(String[] args) {
	Account a1 =new Account();
	Drawer with= new Drawer(a1);
	Depositor d= new Depositor(a1);
	d.start();
	with.start();
}

}
