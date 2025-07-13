package web;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;


public class testDAO 
{
	int k=0;
	public int retrive(test1bean tt) throws SQLException
	{
		Connection conn=DriverManager.getConnection(DBInfo.URL,DBInfo.USERNAME,DBInfo.PASSWORD);
		PreparedStatement statement = conn.prepareStatement("insert into test1 values(?,?)");
		statement.setInt(1, Integer.parseInt(tt.getId()));
		statement.setString(2, tt.getName());
		k = statement.executeUpdate();
		return k;
	}

}
