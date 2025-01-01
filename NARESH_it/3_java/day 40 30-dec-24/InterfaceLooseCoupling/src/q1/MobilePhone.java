package q1;

public interface MobilePhone {

	//inserting, removing SIM cards, making calls, and sending text messages.

	public SIMCardInterface insertingSim();
	public void removeingSim();
	public void makecalls(long num);
	public void sendingtext(long num);
	
	
}
