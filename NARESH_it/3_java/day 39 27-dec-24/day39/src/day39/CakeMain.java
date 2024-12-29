package day39;

public class CakeMain {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Cake c1=new OrderedCake();
//		c1.setPriceType(2000);
		c1.showCake();
		
		Cake c2=new OrderedCake("triangle", "cocolate", 2);
//		c2.setPriceType(4000);
		c2.showCake();
		
		Cake c3=new OrderedCake("square", "fruti", 4, "happy birthday");
//		c3.setPriceType(6000);
		c3.showCake();

	}

}
