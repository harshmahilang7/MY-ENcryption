package day19_q3;


//
//
//Question -3
//---------------
//TimeFormatter (Class as a return type and Class as an argument
//
//A class called  Time is given to you. The task is to create and return a new time object in terms of hours,minutes and seconds by adding two Time objects.
//
//Define the following for the class.
//
//Attributes :
//
//name 
//-------
//hh,mm,ss as private  :-for all (int) is data type and (private) is acessmodifier
//
//Constructor :
//
//	default : Create a no-parameterize constructor. Initialize all attributes to 0.
//
//	paramterized : Create a public parameterized constructor for hours,minutes and seconds in the same sequence.
//
//Methods :
//
//	Name of the method : show 
//
//	Return Type 	: void
//
//	Modifier	: public
//
//	Task : It must display the time in hours:minutes:seconds format. 
//
//       Name Of the method : add  
//
//	Return Type 	: Time
//
//	Modifiers:	: public,static
//
//	Arguments	: 2Time arguments.
//
//	Task		: Add the time
//
//
//Take a ELC Class TimeTester class having main method instatiate the object and check the taste cases.
//
//
//Example : 
//
//  Sample Input :
//
//	time 1 : 2:30:40
//
//	time 2 : 4:40:21 
//
//Expected	output :
//
//Result : 7:11:1

public class TimeFormatter {
	private int hh;
	private int mm;
	private int ss;
	public TimeFormatter() {
		super();
		
	}
	
	public TimeFormatter(int hh, int mm, int ss) {
		super();
		this.hh = hh;
		this.mm = mm;
		this.ss = ss;
	}

	@Override
	public String toString() {
		return "TimeFormatter [hh=" + hh + ", mm=" + mm + ", ss=" + ss + "]";
	}
	
		
	public int getHh() {
		return hh;
	}

	public int getMm() {
		return mm;
	}

	public int getSs() {
		return ss;
	}

	public static TimeFormatter add(TimeFormatter obj1,TimeFormatter obj2)
	
	{
		int hh=obj1.getHh()+obj2.getHh();
		int ss=obj1.getSs()+obj2.getSs();
		int mm=obj1.getMm()+obj2.getMm();
		if(ss>=60)
		{
			mm+=ss/60;
			ss=ss%60;
		}
	
		if(mm>=60)
		{
			hh+=mm/60;
			mm=mm%60;
		}

		
	
		return new TimeFormatter(hh,mm,ss);
	}

	
	

}
