package customer;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;

public class ViewCustomerByIdDAO 
{
	public CustomerBean cb= null;
	
	public CustomerBean retrive(String id)
	{
		try {
			Connection conn=DBConnection.getConn();
			PreparedStatement getbyid = conn.prepareStatement("select * from customer72 where id=?");
			getbyid.setString(1, id);
			ResultSet data = getbyid.executeQuery();
			if (data.next()) 
			{
				cb= new CustomerBean();
				cb.setId(data.getString(1));
				cb.setName(data.getString(2));
				cb.setCity(data.getString(3));
				cb.setPhno(data.getLong(4));
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
		return cb;
		
	}
}
