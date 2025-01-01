package DefaultMethod;


public interface Vehicle 
{	
   void run();
   void horn();
   
   default void digitalMeter()  //java 8
   {
	  System.out.println("Digital Meter Facility is coming soon!!!"); 
   }
}