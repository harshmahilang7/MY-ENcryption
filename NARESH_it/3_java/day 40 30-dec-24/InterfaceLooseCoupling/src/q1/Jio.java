package q1;

public class Jio implements SIMCardInterface {
	private boolean isActivate=false;

	@Override
	public long gettingPhoneNumber() {
		// TODO Auto-generated method stub
		
		return 7587453333L;
	}

	@Override
	public void networkProvider() {
		// TODO Auto-generated method stub
		System.out.println("Jio");
	}

	@Override
	public void activation() {
		// TODO Auto-generated method stub
		isActivate=true;
		System.out.println("Jio-activation");

	}

	@Override
	public void deActivation() {
		// TODO Auto-generated method stub
		isActivate=false;
		System.out.println("Jio-deActivation");

	}

	@Override
	public boolean isActivate() {
		// TODO Auto-generated method stub
		return isActivate;
	}

}
