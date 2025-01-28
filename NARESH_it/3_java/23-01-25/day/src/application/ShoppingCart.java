package application;

import custom_exceptions.InsufficientQuantityException;
import custom_exceptions.InvalidProductException;

public class ShoppingCart {

//	BLC  ShoppingCart Class:
//		Attributes:
//		cartItems: Product[] : to store items in the cart.
//		itemCount: int : An integer representing the number of items in the cart.
//
//		Constructor:
//		parameter : capacity : int
//		Initialize the cartItems with a Product[] based on the given
//		capacity.
//

//
//
//		Method name: calculateTotal
//		Access Modifier : public
//		return type : double
//		parameters : no param
//		Method: Calculates and returns the total price of all items in the cart.

	Product[] cartItems;
	int itemCount;

	public ShoppingCart(Product[] cartItems, int itemCount) {
		super();
		this.cartItems = cartItems;
		this.itemCount = itemCount;
	}

//	Mehtods:
//
//	Method name: addToCart
//	Access Modifier : public
//	return type : void
//	parameters : Product,int
//	Adds the product to the cart or updates its quantity.
//    Throws InsufficientQuantityException if the requested quantity is not available,
//    or InvalidProductException if the product is not found.


	public void addToCart(int Product) throws InsufficientQuantityException
	{

		if()
		for (Product pro : cartItems) {
			if(pro.id==Product)
			{
				if(pro.quantity>=1)
				{

				}
				else
				{
					throw new InsufficientQuantityException();
				}
			}
			else
			{
				throw new InvalidProductException();
			}

		}

	}

 public double calculateTotal()
 {
	 double total_sum=0;
	 for (Product product : cartItems) {
		 total_sum+=product.price*product.quantity;
	}
	 return total_sum;

 }




}
