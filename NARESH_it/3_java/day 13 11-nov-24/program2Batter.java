/*
Design a Cricket Score Board by using foolowing requirements 

Take a Class Batter (Business Logic  Class)

Instance variables:

Names		Return Type
---------		----------------
name		: String
runs		        : int
matches		: int
batting_avg	: float.

Access Modifier :public (for all varriables)

 Create a no argument constructor that assigns default values to instance variables.
 Create parameterized constructor that accepts name, runs, matches.

Methods :

Method name		: computeBattingAverage
Access Modifier 	: public
Return type		: void

This method should print the batting average of the batter by dividing run with matches.

Input: "Sachin", 18000, 463

Output:
Name: Sachin
Batting_Avg: 38.87689

Note: 

a. If runs or matches values are negative print 'Error'.
b. If runs are greater than 0 when matches are 0 print 'Error'.

Method name: getStatistics
Return type: void
This method should print the details of the batter.

Input: "Sachin", 18000, 463

Output:
Name: Sachin
Runs: 18000
Matches: 463
Note: 
a. If runs or matches values are negative print 'Error'.
b. If runs are greater than 0 when matches are 0 print 'Error'.

Given a class Testing (ELC Class) that contains main method. Use this class to test your code.
*/
public class program2Batter
{
	public String name;
	public int run;
	public int matches;
	public float batting_avg;
	program2Batter()
	{
		
	}
	program2Batter(String name,int run,int matches)
	{
		
		this.name=name;
		if(run<0||matches<0||run>0&&matches==0)
		{
			System.err.println("error");
		}
		else
		{
			this.run=run;
			this.matches=matches;
		}
		
	}
	public void computeBattingAverage()
	{
		batting_avg=(float)run/(float)matches;
	}
	public void display()
	{
		System.out.println("name : "+name);
		System.out.println("run : "+run);
		System.out.println("matches : "+matches);
		System.out.println("batting_avg : "+batting_avg);
	}
	
}
