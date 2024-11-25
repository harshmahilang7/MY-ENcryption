package day22setAq1;
//Que 1 :
//=======
//
//Write a Java program to create a PrimeChecker class that has the following attributes and methods:
//
//Attributes:
//int  : number
//boolean isPrime = false
//
//Constuctor :
//one parameterized constructor that initializes the number attribute only.
//
//Methods:
//void isPrime(): this method wiil check the number is prime or not. and based on that it will initialize isPrime = true/false  
//String toString(): Override toString() method , This method should return the result in given format like .... [ 7 is prime =  true ] OR [ 6 is prime =  false ]
// 
//Task:
//In the main method:
//Create a PrimeChecker object with a specific number.
//Call the printResult() method to display whether the number is prime.
//
//
//Example 1 :
//-----------
//Sample Input  : number = 7
//Sample Output : [ 7 is prime =  true ]
//
//Example 2 :
//-----------
//Sample Input  : number = 6
//Sample Output : [ 6 is prime =  false ]
//
//=============================================
public class PrimeChecker {
	int number;
	boolean isprime =false;
	
	public PrimeChecker(int number) {
		super();
		this.number = number;
	}
	
	void isPrime()
	{
		int c=number;
		int count=1;
		for(int i=2;i*i<c;i++)
		{
			if(c%i==0)
			{
				count++;
			}
		}
		if(count==1)
		{
			isprime =true;
		}
		else
		{
			isprime =false;
		}
		
		if(c==1)
		{
			isprime =false;
		}
		
	}

	@Override
	public String toString() {
		return "PrimeChecker [number=" + number + ", isprime=" + isprime + "]";
	}
	
	
	

}
