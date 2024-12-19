//Create a Bank Application project by using Method Overriding Concept to display
//different kinds of account details and calculate interest rate on each different types
//of account like saving account, Current account and Fixed deposit account.
//Validate all the inputs properly and generate error message, if any input is not appropriate.
//
//Create a BLC class called BankAccount
//Fields :
//accountHolderName String protected
//accountNumber String protected
//   balance double protected
//   IFSC_CODE public static final String (Initialize the IFSC CODE at the time of declaration,
//   will be common for all the Objects)
//   
//   Use a parameterized constructor to initialize all the fields, In this constructor provide
//   error message, if inputs are not in valid format like (see test cases for more details)
//a)Account holder name cannot be empty.
//b)Account number cannot be empty.
//c)Balance cannot be negative.
//
//Methods :
//
//1) Method Name        : calculateInterest()
//Argument        : No Argument
//Return Type        : void
//Access modifier    : public
//In this method write a generic message regarding Bank interest Calculation.
//
//2) Method Name        : displayAccountDetails()
//Argument        : No Argument
//Return Type        : void
//Access modifier    : public
//In this method display customer records [See the Test cases for more details in the below
//of this question]
//
//Create another BLC class SavingsAccount which is sub class of BankAccount
//
//Field :
//protected double interestRate = 4.0;
//
//Take a parameterized constructor to initialize super class properties.
//
//Method :
//
//1) Method Name        : calculateInterest()
//Argument        : No Argument
//Return Type        : void
//Access modifier    : public
//In this method write a logic to calculate interest rate on Saving Account.
//
//Create another BLC class CurrentAccount which is sub class of BankAccount
//
//Field :
//protected double overdraftLimit = 5000.0;
//
//Take a parameterized constructor to initialize super class properties.
//
//Method :
//
//1) Method Name        : calculateInterest()
//Argument        : No Argument
//Return Type        : void
//Access modifier    : public
//In this method write a statement that Current accounts do not earn interest.
//
//2) Method Name        : checkOverdraftLimit()
//Argument        : No Argument
//Return Type        : void
//Access modifier    : public
//In this method print overdraftLimit amount.
//
//Create another BLC class FixedDepositAccount which is sub class of BankAccount
//
//Field :
//protected double interestRate = 4.0;
//
//Take a parameterized constructor to initialize super class properties.
//
//Method :
//
//1) Method Name        : calculateInterest()
//Argument        : No Argument
//Return Type        : void
//Access modifier    : public
//In this method write a logic to calculate interest rate on Saving Account.
//
//Field :
//protected double interestRate = 6.5;
//    depositTerm int protected;
//   
//    Take a parameterized constructor to initialize super class and current class properties.
//    Validate the input deposit term with error message, depositTerm can't be negative.
//
//Method :
//
//1) Method Name        : calculateInterest()
//Argument        : No Argument
//Return Type        : void
//Access modifier    : public
//In this method write the logic to calculate the interest amount on FixedDeposit account.
//
//Create an ELC class BankApplication with main method to test this application. Write
//Switch case with Scanner class to Test as shown in the below Test Cases.