package Variable_HAVE_ambiguity_issue;



interface one
{
	int x = 100;
}
interface two
{
	int x = 100;
}
class subclass implements one ,two
{
//   int x = 300; //Variable Hiding to solve ambiguity issue
   public void show() 
   {
//	 System.out.println(one.super.x);   //	The field x is ambiguous
	   System.out.println(x);            //	The field x is ambiguous
   }
}

public class Ambiguityissue1 {
	public static void main(String[] args) 
	{
		new MyClass().show();

	}

}
