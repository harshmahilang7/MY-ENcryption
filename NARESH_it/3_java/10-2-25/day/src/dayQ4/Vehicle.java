package dayQ4;

public sealed interface Vehicle permits Car, Bike {
	public abstract void run();
}
