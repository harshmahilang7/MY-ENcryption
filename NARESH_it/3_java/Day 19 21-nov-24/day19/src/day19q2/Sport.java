package day19q2;


//Question - 2
//--------------
// Design sports Model system
//
//Create  a class name Sports (BLC Class)
//
//
//Atributes :
//
//name 			Return Type
//-------			--------------
//sportName            :String 
//
//teamSize		      :int 
//
//sportType              :String 
//
//Acess modifier  :private (for all varriable)
//
//Take a no parameterized constructor and initialize all the default values to varriables.
//
//Take one more constructor with two parameteres sportName and teamSize
//and intialize with user values and write the validation logic
//
//Take another constructor with 3 parameters and intialize all the values and check the validation.
//
//Methods  :
//
//Method Name     : displayInfo
//Return Type 	     : void
//Acess Modifier    : public 
//
//and in this method to print all the details of the class.
//
//
//Take a Main Class(ELC Class)wich having main method and instatiate the object and execute the method.
//
//Test Cases:
//-------------
//
//for teamSize. If teamSize is less than or equal to zero, it sets teamSize to 0 and prints an error message.
//
//Test Case 1:  
//Sport Name: Football
//Team Size: 11
//Sport Type: Unknown
//
//Expected Output :
//---------------------
//(print the details)
//
//Test Case 2: Invalid sport with negative team size
//Error: Team size must be positive.
//Sport Name: Volleyball
//Team Size: -1
//Sport Type: Unknown
//
//Expected Output :
//---------------------
//Error: Team size must be positive.

public class Sport {
	
	private String sportName;
	private int teamSize;
	private String sportType;
	
	public Sport() {
		super();
		this.sportName = "Football";
		this.teamSize = 12;
		this.sportType = "outdoor";
	}

	public Sport(String sportName, int teamSize)
	{
		super();
		this.sportName = sportName;
		if(teamSize<=0)
		{
			System.err.println("Team size must be positive.");
		}
		else
		{
			this.teamSize = teamSize;
		}
		this.sportType = "UNKNOWN";

	} 
	public Sport(String sportName, int teamSize, String sportType) {
		this(sportName,teamSize);
		this.sportType = sportType;
	}

	@Override
	public String toString() {
		return "Sport [sportName=" + sportName + ", teamSize=" + teamSize + ", sportType=" + sportType + "]";
	}

	

	
	
	
	

}
