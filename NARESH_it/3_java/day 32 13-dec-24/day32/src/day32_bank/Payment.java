package day32_bank;

//Develop a scenario based program by using Method Overloading for processing the payment
//using different available options like Cash Payment, Credit Card and Debit Card Payment.
//
//Create one BLC class called Payment.
//
//Write 3 overloaded methods makePayment()
//
//1) Method Name        : makePayment()
//Argument        : 1 argument of type double amount
//Return Type        : void
//Access modifier    : public
//In this method validate the parameter variable by using one Helper method (private
//method) validateAmount() to take only positive amount [Description is given below]
//
//2) Method Name        : makePayment()
//Argument        : 3 arguments [String cardHolderName, String creditCardNumber,double amount]
//Return Type        : void
//Access modifier    : public
//In this method validate the parameter variable amount and creditCardNumber through
//Helper methods, amount must be positive integer and creditCardNumber must be of
//16 digits exactly.
//
//3) Method Name        : makePayment()
//Argument        : 2 arguments [String debitCardNumber, double amount]
//Return Type        : void
//Access modifier    : public
//In this method validate the parameter variable amount and debitCardNumber though
//Helper methods, amount must be positive integer and debitCardNumber must be of
//16 digits exactly.
//
//HELPER METHODS (Must be private so accessible from inside Payment class only)
//[For more about helper method, read the notes, Access modifier topic, public access modifier]
//
//1) Method Name    : validateAmount()
//Argument        : 1 argument double amount
//Return Type    : boolean
//Access modifier    : private
//In this method validate the amount, if amount is 0 or less than 0, print an error
//message and return false otherwise return true.
//
//2) Method Name    : validateCardNumber()
//Argument        : 1 argument String cardNumber.
//Return Type    : boolean
//Access modifier    : private
//In this method validate the card number for its length, if length is exactly 16 digits
//then return true otherwise return false.
//
//3) Method Name    : maskCardNumber()
//Argument        : 1 argument String cardNumber.
//Return Type    : boolean
//Access modifier    : private
//By using this method we should display only last 4 digit of card (Credit OR Debit both)
//only.[See the Test cases for more details in the below of this question]
//
//Create an ELC class called PaymentProcess.
//
//Inside main method display the following details as a Menu.
//System.out.println("Payment Menu");
//System.out.println("Please select any one Payment Method from the Menu :");
//System.out.println("\t\t 1) Payment by using Cash ");
//System.out.println("\t\t 2) Payment by using Credit Card ");
//System.out.println("\t\t 3) Payment by using Debit Card ");
//
//Write Switch case with Scanner class to make the payment through different Options :
//
//Test Cases for Output :
//------------------------
//Test Case 1 :
//-------------
//Payment Menu
//Please select any one Payment Method from the Menu :
//        1) Payment by using Cash
//        2) Payment by using Credit Card
//        3) Payment by using Debit Card
//Please enter your Payment choice [1/2/3]
//1
//Enter the amount you want to pay through cash :
//12000
//Processing payment via Cash...
//Amount Paid RS :12000.0
//Payment Successful!
//
//Test Case 2 :
//-------------
//Payment Menu
//   Please select any one Payment Method from the Menu :
//        1) Payment by using Cash
//        2) Payment by using Credit Card
//        3) Payment by using Debit Card
//   Please enter your Payment choice [1/2/3]
//   2
//   Enter your name :
//   RaviShankar
//   Enter your 16 digit Credit Card Number :
//   1234987645672345
//   Enter your Payment Amount :
//   12000
//   Processing payment via Credit Card...
//   Card Holder: RaviShankar
//   Card Number: ****-****-****-2345
//   Amount Paid RS :12000.0
//   Payment Successful!
//   
//   Test Case 3 :
//-------------
//Payment Menu
//   Please select any one Payment Method from the Menu :
//        1) Payment by using Cash
//        2) Payment by using Credit Card
//        3) Payment by using Debit Card
//   Please enter your Payment choice [1/2/3]
//   3
//   Enter your 16 digit Debit Card Number :
//   1234123412341234
//   Enter your Payment Amount :
//   12000
//   Processing payment via Debit Card...
//   Card Number: ****-****-****-1234
//   Amount Paid RS :12000.0
//   Payment Successful!
//
//
//Test Cases for Input Validation :
//---------------------------------
//Test Cases 1:
//-------------
//Payment Menu
//   Please select any one Payment Method from the Menu :
//        1) Payment by using Cash
//        2) Payment by using Credit Card
//        3) Payment by using Debit Card
//   Please enter your Payment choice [1/2/3]
//   1
//   Enter the amount you want to pay through cash :
//   -1000
//   Error: Amount must be greater than zero.
//   
//   Test Cases 2:
//-------------
//Payment Menu
//   Please select any one Payment Method from the Menu :
//        1) Payment by using Cash
//        2) Payment by using Credit Card
//        3) Payment by using Debit Card
//   Please enter your Payment choice [1/2/3]
//   2
//   Enter your name :
//   Ravishankar
//   Enter your 16 digit Credit Card Number :
//   1234
//   Enter your Payment Amount :
//   123
//   Error: Invalid card number. It must be 16 digits.
//
//Test Cases 3:
//-------------
//Payment Menu
//   Please select any one Payment Method from the Menu :
//        1) Payment by using Cash
//        2) Payment by using Credit Card
//        3) Payment by using Debit Card
//   Please enter your Payment choice [1/2/3]
//   3
//   Enter your 16 digit Debit Card Number :
//   1234
//   Enter your Payment Amount :
//   123
//   Error: Invalid card number. It must be 16 digits.



public class Payment {

//	helper method
	private boolean validateAmount(double amount)
	{
		//1) Method Name    : validateAmount()
		//Argument        : 1 argument double amount
		//Return Type    : boolean
		//Access modifier    : private
		//In this method validate the amount, if amount is 0 or less than 0, print an error
		//message and return false otherwise return true.
		if(amount<=0)
		{
			System.err.println("take only positive amount");
			return false;
		}
		else
		{
			return true;
		}
		
	}
	
	
	//helper method
	private boolean validateCardNumber(String cardNumber)
	{
		//2) Method Name    : validateCardNumber()
		//Argument        : 1 argument String cardNumber.
		//Return Type    : boolean
		//Access modifier    : private
		//In this method validate the card number for its length, if length is exactly 16 digits
		//then return true otherwise return false.
//		int length=0;
//		while(cardNumber!=0)
//		{
//			cardNumber/=10;
//			length++;
//		}
		if(cardNumber.length()!=16)
		{
			System.err.println("length is exactly 16 digits");
			return false;
		}
		else
		{
			return true;
		}
		
	}
	
	

	//helper method 
	@SuppressWarnings({ "null", "unused" })
	private boolean maskCardNumber(String cardNumber)
	{
	//3) Method Name    : maskCardNumber()
	//Argument        : 1 argument String cardNumber.
	//Return Type    : boolean
	//Access modifier    : private
	//By using this method we should display only last 4 digit of card (Credit OR Debit both)
	//only.[See the Test cases for more details in the below of this question]
//		private char[] last = null;
//		for(int i=12;i<=cardNumber.length();i++)
//		{
//			int j=0;
//			last[j++]=cardNumber.charAt(i);
//		}
		
	String last=cardNumber.substring(cardNumber.length() - 4);
	 System.out.println("****-****-****-"+last);
	 return true;
		
	}
	
	
	public void makePayment(double amount)
	{
//		1) Method Name        : makePayment()
		//Argument        : 1 argument of type double amount
		//Return Type        : void
		//Access modifier    : public
		//In this method validate the parameter variable by using one Helper method (private
		//method) validateAmount() to take only positive amount [Description is given below]
		validateAmount(amount);
	}

	
	public void makePayment(String cardHolderName, String creditCardNumber,double amount)
	{
	//2) Method Name        : makePayment()
	//Argument        : 3 arguments [String cardHolderName, String creditCardNumber,double amount]
	//Return Type        : void
	//Access modifier    : public
	//In this method validate the parameter variable amount and creditCardNumber through
	//Helper methods, amount must be positive integer and creditCardNumber must be of
	//16 digits exactly.
	//
		validateAmount(amount);
		validateCardNumber(creditCardNumber);
		maskCardNumber(creditCardNumber);
		
	}
	
	
	public void makePayment(String debitCardNumber, double amount)
	{
//	/3) Method Name        : makePayment()
	//Argument        : 2 arguments [String debitCardNumber, double amount]
	//Return Type        : void
	//Access modifier    : public
	//In this method validate the parameter variable amount and debitCardNumber though
	//Helper methods, amount must be positive integer and debitCardNumber must be of
	//16 digits exactly.
		validateAmount(amount);
		validateCardNumber(debitCardNumber);
		maskCardNumber(debitCardNumber);
		
	}
}
