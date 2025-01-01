package Variable_HAVE_ambiguity_issue;


interface Hello
{
	int x = 100;
}
abstract class Test
{
	int x = 200;
}
class MyClass extends Test implements Hello
{
//   int x = 300; //Variable Hiding to solve ambiguity issue
   public void show() 
   {
	 System.out.println(x);   //	The field x is ambiguous
   }
}

public class VariableHiding {

	public static void main(String[] args) 
	{
		new MyClass().show();

	}

}
