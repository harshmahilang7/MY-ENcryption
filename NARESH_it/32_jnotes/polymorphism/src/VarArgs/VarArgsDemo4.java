package VarArgs;


class Accept
{
	 public void acceptHetrogeneous(Object ...obj)
	 {
		 for(Object o : obj)
		 {
			 System.out.println(o);
		 }
	 }
}
//Interger 

public class VarArgsDemo4 {

	public static void main(String[] args) 
	{
		Accept a1 = new Accept();
		a1.acceptHetrogeneous(12,23.90,'A',"NIT", new String("Hyd"));
	}

}