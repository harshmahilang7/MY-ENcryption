package q1;

public class Customer {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		MobilePhone lava=new MobilePhoneclass();
		SIMCardInterface sim=lava.insertingSim(); 
		sim.activation();
//		sim.deActivation();
//		sim.gettingPhoneNumber();
//		sim.networkProvider();
		lava.makecalls(9399473904L);
		lava.sendingtext(9399473904L);
		lava.removeingSim();

	}

}
