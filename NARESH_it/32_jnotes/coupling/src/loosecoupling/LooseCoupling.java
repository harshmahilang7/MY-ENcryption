package loosecoupling;

public class LooseCoupling 
{
   public static void main(String[] args) 
   {
	   
	  HotDrink h=new Tea();  // loose coupling => up-casting 
	  h=new Coffee();
	  h=new Horlicks();

	  Restaurant.acceptObject(new Tea());
	  Restaurant.acceptObject(new Coffee());
	  Restaurant.acceptObject(new Horlicks());
   }
}
