package VarArgs;
//WAP to show that var-args can accept 0 to n number of parameters 
class Test
{
	public void input(int ...x)
	{
	 System.out.println("Var Args executed");	
	 int sum=0;
	 for (int c : x)
	 {
		 sum=sum+c;
		
		 
	 }
	 System.out.println("sum : "+sum);

	 
//	 int sum=0;
//	 for (int i=0;i<x.length;i++)
//	 {
//		 sum=sum+x[i];
//	 }
//	 
//	 System.out.println("sum : "+sum);
	}
}

public class VarArgsDemo
{
	public static void main(String... args) 
	{	  
		
          Test t1 = new Test();
          t1.input();
          t1.input(10);
          t1.input(10,20);
          t1.input(10,20,30);
          t1.input(100,200,300,400); 
	}

}