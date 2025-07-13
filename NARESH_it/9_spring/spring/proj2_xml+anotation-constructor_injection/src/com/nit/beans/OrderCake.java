package com.nit.beans;

import lombok.Setter;

@Setter
public class OrderCake implements Cake 
{

	private String shape;
	private String flavour;
	private int qty;
	private float price;
	private String message;
	
	@Override
	public void showCake() {
		if(message==null) {
			System.out.println("A "+shape+" "+flavour+" "+"Cake of "+qty+" Kg/Kg's Ready @ Rs. "+price);
			}
			else {
				System.out.println("A "+shape+" "+flavour+" "+"Cake of "+qty+" Kg/Kg's Ready With Message "+message+" @ Rs. "+price);	
			}
		
	}

	public OrderCake(String shape, String flavour, int qty) {
		super();
		this.shape = shape;
		this.flavour = flavour;
		this.qty = qty;
		this.price = qty*400;
	}

	public OrderCake(String shape, String flavour, int qty, String message) {
		super();
		this.shape = shape;
		this.flavour = flavour;
		this.qty = qty;
		this.price = qty*400;
		this.message = message;
	}
	
	
	

}
