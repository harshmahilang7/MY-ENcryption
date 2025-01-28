package costom_exception;

@SuppressWarnings("serial")
public class LoanNotAllowedException extends RuntimeException {

	public LoanNotAllowedException() {
		// TODO Auto-generated constructor stub
	}

	public LoanNotAllowedException(String message) {
		super(message);
		// TODO Auto-generated constructor stub
	}

	public LoanNotAllowedException(Throwable cause) {
		super(cause);
		// TODO Auto-generated constructor stub
	}

	public LoanNotAllowedException(String message, Throwable cause) {
		super(message, cause);
		// TODO Auto-generated constructor stub
	}

	public LoanNotAllowedException(String message, Throwable cause, boolean enableSuppression,
			boolean writableStackTrace) {
		super(message, cause, enableSuppression, writableStackTrace);
		// TODO Auto-generated constructor stub
	}

}
