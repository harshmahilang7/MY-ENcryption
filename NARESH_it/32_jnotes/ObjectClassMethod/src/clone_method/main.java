package clone_method;

public class main {
public static void main(String[] args) throws CloneNotSupportedException
{
			student s1 =new student(1, "divakar");
			
			student s2= (student)s1.clone();
			
			System.out.println(s2);
}

}
