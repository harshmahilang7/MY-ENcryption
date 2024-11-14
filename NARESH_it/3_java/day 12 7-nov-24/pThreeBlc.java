/*
Q-3)
------

Q2) Bowler Details and Average Calculation (Single Class Program)

Create a single class called BowlerStatistics to manage bowler details and calculate their bowling average and strike rate. 


Create a BLC class BowlerStatistics :

Instance Variables:

bowlerName: private String
wickets: private int
matches: private int
ballsBowled: private int
runsConceded: private int

Setter Methods:

Define setter methods for each instance variable to initialize values individually.


Methods:
------------

Method Name: computeBowlingAverage

Return Type: void

Description: This method calculates the bowlingaverage by dividing runsConceded by wickets and prints the result. 

If any values are negative, or if runsConceded or ballsBowled are greater than 0 when matches is 0, print "Error".

Method Name: computeStrikeRate

Return Type: void

Description: This method calculates the strike rate by dividing runsConceded by ballsBowled and prints the result. If any values are negative, or if runsConceded or ballsBowled are greater than 0 when matches is 0, print "Error".

Method Name: showBowlerStatistics

Return Type: void

Description: This method prints all the bowler's details (bowlerName, wickets, matches, ballsBowled, and runsConceded). If any values are negative, or if runsConceded or ballsBowled are greater than 0 when matches is 0, print "Error".


Main Method:

In the main method, create an instance of BowlerStatistics.

Use the setter methods to initialize bowlerName, wickets, matches, ballsBowled, and runsConceded.

Call computeBowlingAverage and computeStrikeRate to display the respective calculations.

Use showBowlerStatistics to print all the initialized values and verify the inputs.

*/

class pThreeBlc 
{
	private String bowlerName;
    private int wickets;
	private int matches;
	private int ballsBowled;
	private int runsConceded;
	
	public void setBowlerName(String bowlerName)
	{
		this.bowlerName=bowlerName;
	}
	public void setWickets(int wickets)
	{
		this.wickets=wickets;
	}
	public void setMatches(int matches)
	{
		this.matches=matches;
	}
	public void setBallsBowled(int ballsBowled)
	{
		this.ballsBowled=ballsBowled;
	}
	public void setRunsConceded(int runsConceded)
	{
		this.runsConceded=runsConceded;
	}
	
	
	public Boolean isMatchesZero()
	{
		if (matches<=0)
		{
			System.out.println("Error");
			return true;
		}
		if(runsConceded<=0)
		{
			System.out.println("Error");
			return true;
		}
		if(ballsBowled<=0)
		{
			System.out.println("Error");
			return true;
		}
		return false;
		
	}
	public void computeBowlingAverage()
	{
		//If any values are negative, or if runsConceded or ballsBowled are greater than 0 when matches is 0, print "Error".
		
		if (isMatchesZero()==true)
		{}
		else
		{
			int bowlingAverage=runsConceded/wickets;
			System.out.println("bowlingAverage : "+bowlingAverage);
		}
		
	}
	
	public void computeStrikeRate()
	{
	
//Description: This method calculates the strike rate by dividing runsConceded by ballsBowled and prints the result. If any values are negative, or if runsConceded or ballsBowled are greater than 0 when matches is 0, print "Error".
		if (isMatchesZero()==true){}
		else
		{
			int strikeRate =runsConceded/ballsBowled;
			System.out.println("strikeRate : "+strikeRate);
		}
	}
	
	public void showBowlerStatistics()
	{
		//Description: This method prints all the bowler's details (bowlerName, wickets, matches, ballsBowled, and runsConceded). If any values are negative, or if runsConceded or ballsBowled are greater than 0 when matches is 0, print "Error".
		if (isMatchesZero()==true){}
		else
		{
			System.out.println("bowlerName : "+bowlerName);
			System.out.println("wickets : "+wickets);
			System.out.println("matches : "+matches);
			System.out.println("ballsBowled : "+ballsBowled);
			System.out.println("runsConceded : "+runsConceded);

		}
		
	}
	
}
