package custom_exceptions;

@SuppressWarnings("serial")
public class InsufficientQuantityException extends Exception {

	public InsufficientQuantityException() {
	}

	public InsufficientQuantityException(String message) {
		super(message);
	}

	public InsufficientQuantityException(Throwable cause) {
		super(cause);
		// TODO Auto-generated constructor stub
	}

	public InsufficientQuantityException(String message, Throwable cause) {
		super(message, cause);
		// TODO Auto-generated constructor stub
	}

	public InsufficientQuantityException(String message, Throwable cause, boolean enableSuppression,
			boolean writableStackTrace) {
		super(message, cause, enableSuppression, writableStackTrace);
		// TODO Auto-generated constructor stub
	}

}
