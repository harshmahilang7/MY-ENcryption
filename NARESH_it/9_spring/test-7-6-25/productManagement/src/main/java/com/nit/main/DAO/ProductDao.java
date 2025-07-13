package com.nit.main.DAO;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

import javax.sql.DataSource;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Repository;

import com.nit.main.model.Product;

@Repository
public class ProductDao implements IProductDao 
{
	
//	SQL> create table product(id number(20),name varchar2(30),price number(7,2));
//
//	Table created.
//
//	SQL>
	private static final String Insert_Product="INSERT INTO product VALUES(?,?,?)";
	private static final String GetProductById="SELECT * FROM  product WHERE ID=?";
	private static final String GetAllProducts="SELECT * FROM  product ";
	
	@Autowired
	private DataSource ds;

	@Override
	public int insertProduct(Product product) throws SQLException {
		
		try(
				Connection con= ds.getConnection();
				PreparedStatement ps= con.prepareStatement(Insert_Product);
			)
		{
			ps.setLong(1, product.getId());
			ps.setString(2, product.getName());
			ps.setDouble(3, product.getPrice());
			return ps.executeUpdate();
		}
		
	}

	@Override
	public Product getProductById(Long id) throws SQLException 
	{
		try(
				Connection con= ds.getConnection();
				PreparedStatement ps= con.prepareStatement(GetProductById);
			)
		{
			ps.setLong(1, id);
			ResultSet executeQuery = ps.executeQuery();
			if(executeQuery.next())
			{
				Product p= new Product();
				p.setId(executeQuery.getLong(1));
				p.setName(executeQuery.getString(2));
				p.setPrice(executeQuery.getDouble(3));
				return p;
			}	
		}
		return null;
	}

	@Override
	public List<Product> getAllProducts() throws SQLException {
		List<Product> list= new ArrayList<>();
		try(
				Connection con= ds.getConnection();
				PreparedStatement ps= con.prepareStatement(GetAllProducts);
			)
		{
			ResultSet executeQuery = ps.executeQuery();
			while(executeQuery.next())
			{
				Product p= new Product();
				p.setId(executeQuery.getLong(1));
				p.setName(executeQuery.getString(2));
				p.setPrice(executeQuery.getDouble(3));
				list.add(p);
			}	
		}
		return list;
	
	}

}
