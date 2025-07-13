package com.nit.main.Controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;

import com.nit.main.model.Product;
import com.nit.main.service.ProductService;

@Controller("pc")
public class ProductController 
{
	@Autowired
	private ProductService ps;
	
	public int insertProduct(Product product) 
	{
		return ps.insertProduct(product); 
	}
	
	public Product getProductById(Long id)
	{
		return ps.getProductById(id); 
	}
	
	public void getAllProducts()
	{
		ps.getAllProducts();
	}
}
