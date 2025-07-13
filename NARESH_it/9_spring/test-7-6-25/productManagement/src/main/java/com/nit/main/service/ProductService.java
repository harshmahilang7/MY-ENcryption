package com.nit.main.service;

import java.sql.SQLException;
import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.nit.main.DAO.ProductDao;
import com.nit.main.model.Product;

@Service
public class ProductService 
{
	@Autowired
	private ProductDao pd;
	
	public int insertProduct(Product product) 
	{
		int insertProduct =0;
		try {
			insertProduct = pd.insertProduct(product);
		} catch (SQLException e) {
			e.printStackTrace();
		}
		return insertProduct;
		
	}
	public Product getProductById(Long id)
	{
		Product productById= null;
		try {
		     productById = pd.getProductById(id);
		} catch (SQLException e) {
			e.printStackTrace();
		}
		return productById;
	}
	public void getAllProducts()
	{

		try {
			List<Product> allProducts = pd.getAllProducts();
			allProducts.stream().forEach(p -> System.out.println(p));
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
	}
	
	

}
