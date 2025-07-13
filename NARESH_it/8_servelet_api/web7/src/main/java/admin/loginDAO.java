package admin;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;

import database.DBconnection;

public class loginDAO 
{
	public int check(String u,String p)
	{
		try
		{
			Connection con = DBconnection.getCon();
			PreparedStatement statement = con.prepareStatement("select * from admin_web7 where username=?");
			statement.setString(1, u);
			ResultSet eq = statement.executeQuery();
			if(eq.next())
			{
				boolean equals = eq.getString(2).equals(p);
				if(equals==true)
				{
					return 2;
				}
				else
				{
					return 1;
				}
			}
		}
		catch (Exception e) {
			
		}
		return 0;
	}

}
