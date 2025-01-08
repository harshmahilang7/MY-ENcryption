package interface_cant_extend_class;

//Note : java compiler will not add any final method of Object class inside an interface because abstract method we can't declare as final

//all the public and non final methods of Object class are re-declared inside an interface as an abstract method if that interface does not extend from another interface.
interface Printable
{
	//public String toString();            //added by compiler
	//public int hashCode();               //added by compiler
	//public boolean equals(Object obj);   //added by compiler
}
class Print extends Object implements Printable
{
	/*public String toString()
	 * {
	 *     //Inherited from Object class
	 * }
	 * 
	 * public int hashCode()
	 * {
	 * //Inherited from Object class
	 * }
	 * 
	 * public boolean equals(Object obj)
	 * {
	 *    //Inherited from Object class
	 * }
	 * 
	 * 
	 */
}

public class InterfaceMemberDemo1 
{
	public static void main(String[] args) 
	{
		Printable p = new Print();
		p.toString();
		p.equals(null);
		p.hashCode();

	}

}
