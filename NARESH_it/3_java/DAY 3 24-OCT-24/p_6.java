/*Program 01:
-----------
Write a  program in Java that will generate and print the bill at Dominos for four chicken rolls (@ Rs 60 per chicken rolls) and three vegetable puffs (@ Rs 25 per vegetable puffs). There is a special discount of Rs 50 on the final bill amount. Calculate and print final bill as well as all item bill.*/
class p_6 
{
	public static void main(String[] args) 
	{
		System.out.println("---------------bill---------------");
		System.out.println("4 chicken rolls -------4x60="+4*60);
		System.out.println("3 vegetable puffs------3x25="+3*25);
		System.out.println("----------------------------------");
		System.out.println("Total bill                   "+((3*25)+(4*60)));
		System.out.println("special discount            -"+50);
		System.out.println("----------------------------------");
		System.out.println("final bill                 "+((3*25)+(4*60)-50));
	}
}
