package admin;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.SQLException;

import database.DBconnection;

public class AdminDAO 
{
	int k;
	public int insert(AdminBean ab) 
	{
		Connection con = DBconnection.getCon();
		try {
			PreparedStatement statement = con.prepareStatement("insert into admin_web7 values(?,?)");
			statement.setString(1, ab.getUsername());
			statement.setString(2, ab.getPassword());
		    k= statement.executeUpdate();
		} catch (SQLException e) {
			
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return k;
		
	}

}
