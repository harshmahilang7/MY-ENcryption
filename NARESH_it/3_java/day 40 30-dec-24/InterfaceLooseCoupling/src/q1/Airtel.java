package q1;

public class Airtel implements SIMCardInterface {
	private boolean isActivate=false;
	@Override
	public long gettingPhoneNumber() {
		// TODO Auto-generated method stub
		
		return 9981554165L;
	}

	@Override
	public void networkProvider() {
		// TODO Auto-generated method stub
		System.out.println("Airtel");
		
	}

	@Override
	public void activation() {
		// TODO Auto-generated method stub
		isActivate=true;
		System.out.println("Airtel-activation");
	}

	@Override
	public void deActivation() {
		// TODO Auto-generated method stub
		isActivate=false;
		System.out.println("Airtel-deActivation");


	}

	public boolean isActivate() {
		return isActivate;
	}
	
	

}
