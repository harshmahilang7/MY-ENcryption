package application;

public class ShoppingApplication {

	public static void main(String[] args) {
//		Main Method: Demonstrates the shopping application's functionality.
//		Creates some sample products and a shopping cart with a capacity of 10 products.
//		Adds products to the cart and handles exceptions as needed.
//		Calculates and displays the total price of the items in the cart.

		Product p1=new  Product(001, "phone", 1, 3);
		Product p2=new  Product(002, "tv", 1, 9);
		Product p3=new  Product(003, "earphone", 1, 7);
		Product p4=new  Product(004, "tablet", 1, 8);

		Product[] cartItems= new Product[4];
		cartItems[0]=p1;
		cartItems[1]=p2;
		cartItems[2]=p3;
		cartItems[3]=p4;

		ShoppingCart s1=new ShoppingCart(cartItems, 1);
		System.out.println(s1.calculateTotal());



	}

}
