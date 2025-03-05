package day;

public class CabCustomerServiceTester {

	public static void main(String[] args) {
		CabCustomer vijay =new CabCustomer(21,"vijay","ert","tyu",8,"97654321");
		CabCustomerService taxi= new CabCustomerService();
		taxi.printBill(vijay);
		taxi.addCabCustomer(vijay);
		taxi.addCabCustomer(vijay);
		taxi.printBill(vijay);


	}

}
