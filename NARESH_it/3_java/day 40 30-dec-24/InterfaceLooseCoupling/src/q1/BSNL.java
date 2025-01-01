package q1;

public class BSNL implements SIMCardInterface {
	private boolean isActivate=false;
	@Override
	public long gettingPhoneNumber() {
		// TODO Auto-generated method stub
		
		return 9888888888L;
	}

	@Override
	public void networkProvider() {
		// TODO Auto-generated method stub
		System.out.println("BSNL");
	}

	@Override
	public void activation() {
		// TODO Auto-generated method stub
		isActivate=true;
		System.out.println("BSNL-activation");

	}

	@Override
	public void deActivation() {
		// TODO Auto-generated method stub
		isActivate=false;
		System.out.println("BSNL-deActivation");

	}

	@Override
	public boolean isActivate() {
		// TODO Auto-generated method stub
		return isActivate;
	}
}
