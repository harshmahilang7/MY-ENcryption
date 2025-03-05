package day;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.Scanner;


//class elc
//{
//    private static void compareIterationOrder()
//    {
//
//    }
//    
//}

public class ComparingHashMapAndLinkedHashMap
{
   public static void main(String[] args)
   {
	   

     Scanner sc= new Scanner(System.in);
     System.out.println("enter the data ");
     int size=sc.nextInt();
     HashMap<Integer, String> hashMap = new HashMap<>();
     LinkedHashMap<Integer, String> linkedHashMap = new LinkedHashMap<>();

     
     for (int i = 0; i < size; i++) {
    	 int o= sc.nextInt();
    	 Integer x=o;
    	 String y= sc.next();
    	 hashMap.put(x, y);
    	 linkedHashMap.put(x, y);
		
	}
     
     
     hashMap.forEach((x,y) -> System.out.println(x+"->"+y));
     linkedHashMap.forEach((x,y) -> System.out.println(x+"->"+y));
     sc.close();
  

   }
}