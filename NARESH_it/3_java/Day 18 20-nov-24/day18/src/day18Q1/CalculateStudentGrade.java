package day18Q1;


//Create another class CalculateStudentGrade which does not contain any field (Variable)
//
//Methods :
//Name of the Method : calculateGrade()  [Factory Method]
//return type : StudentGrade 
//Access Modifier : public, static
//Argument : Student 
//
//In calculateGrade() method, task is to find the Student grade based on the Student marks and create and return the StudentGrade
//object on the following criteria :
//
//Student Marks                 Grade
//> 90                            A
//>= 75                           B
//>= 60                           C
//< 60                            D
//
public class CalculateStudentGrade {
	public static StudentGrade calculateGrade(Student obj)
	{
		int marks=obj.getMarks();
		if(marks>90)
		{
			return new StudentGrade(obj,'A');
		}
		else if (marks>=70&&marks<=89)
		{
			return new StudentGrade(obj,'B');
		}
		else if (marks>=60&&marks<=69)
		{
			return new StudentGrade(obj,'C');
		}
		else if (marks>=0&&marks<60)
		{
			return new StudentGrade(obj,'D');
		}
		else
		{
			return new StudentGrade(obj,'f');
		}
	}

}
