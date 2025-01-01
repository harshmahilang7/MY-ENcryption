package loosecoupling;

public class Restaurant 
{
   public static void acceptObject(HotDrink hd)  //hd = new Tea();
   {
	   hd.prepare();
   }
}
