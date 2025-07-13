package customer;

import java.sql.Connection;
import java.sql.PreparedStatement;

public class AddCustomerDAO 
{
	public int k=0;
	public int insert(CustomerBean cb) 
	{
		try
		{
			Connection conn=DBConnection.getConn();
			PreparedStatement insert= conn.prepareStatement("insert into customer72 values(?,?,?,?)");
		    insert.setString(1, cb.getId());
		    insert.setString(2, cb.getName());
		    insert.setString(3, cb.getCity());
		    insert.setLong(4, cb.getPhno());
		    k=insert.executeUpdate();
		}
		catch(Exception e)
		{
			e.printStackTrace();
		}
		return k;
		
	}

}
