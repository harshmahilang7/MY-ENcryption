package com.nit.sbeans;

import java.util.ArrayList;

import lombok.Setter;

@Setter
public class ZomatoService implements FoodService
{
//	ZomatoService:
//  Flat ₹20 delivery charge.
//  15% discount on orders above ₹300.
	ArrayList<String> allItem;
	ArrayList<Double> allPrice;
	String item;
	double price;
	
	
	@Override
	public void addItem(String item, double price) {
		allItem.add(item);
		allPrice.add(price);
		System.out.println("ZomatoService.addItem() added");
	}

	@Override
	public void viewOrder() {
		allItem.forEach(System.out::println);
		allPrice.forEach(System.out::println);
		Double[] p = (Double[]) allPrice.toArray();
		double t=0;
		for (int i = 0; i < p.length; i++) 
		{
			t=t+p[i];
		}
		System.out.println("total bill : "+t);
		System.out.println("delivery charge. : "+20);
		if(t>300)
		{
			System.out.println("15% discount on orders above ₹300.");
			double iv=(t+20)-(t*0.1)*15;
			System.out.println("total bill : "+iv);
		}
		else
		{
			System.out.println("total bill : "+t+20);
		}
		
	}
	
	

	@Override
	public void placeOrder() {
		// TODO Auto-generated method stub
		
	}

	@Override
	public String toString() {
		return "ZomatoService item=" + item + ", price=" + price
				+ "]";
	}



}
