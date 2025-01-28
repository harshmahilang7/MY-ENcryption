package application;

import custom_exceptions.InsufficientQuantityException;

public class Product {

//	Attributes:
//		id: int: representing the product's unique identifier.
//		name: String: representing the product's name.
//		price: double: representing the product's price.
//		quantity: int: representing the available quantity of the product.
//
//
//		Constructor:
//		Parameterized Constructor to initialize all the atributes.
//

	int id;
	String name;
	double price;
	int quantity;
	public Product(int id, String name, double price, int quantity) {
		super();
		this.id = id;
		this.name = name;
		this.price = price;
		this.quantity = quantity;
	}

//	methods :
//	Method name: decreaseQuantity
//	Access Modifier : public
//	return type : void
//	parameters : amount: int
//	Takes an integer amount as a parameter and decreases the product's quantity.
//	Throws InsufficientQuantityException if the requested quantity is not available.


	public void decreaseQuantity(int amount) throws InsufficientQuantityException
	{
		if(this.quantity<=0)
		{
			throw new InsufficientQuantityException("Insufficient Quantity !");
		}
		else
		{
			this.quantity--;
		}
	}



}
