package app;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;

//SQL> create table user_management_system
//(name varchar2(20),
//email varchar2(30),
//password varchar2(20),
//phone number(15));
//
//Table created.
//
//SQL>


public class UserDAO 
{
	int k=0;
	public int insertUser(UserBean ub) throws SQLException
	{
		Connection con = DBconnection.getConnection();
		PreparedStatement insert = con.prepareStatement("insert into user_management_system values(?,?,?,?)");
		insert.setString(1, ub.getName());
		insert.setString(2, ub.getEmail());
		insert.setString(3, ub.getPassword());
		insert.setLong(4, ub.getPhone());
		k = insert.executeUpdate();
		return k;
	}
	
	
	public UserBean userByEmail(String email) throws SQLException
	{
		Connection con = DBconnection.getConnection();
		PreparedStatement dataSql = con.prepareStatement("select * from user_management_system where email=?");
		UserBean ub= new UserBean();
		dataSql.setString(1, email);
		ResultSet data = dataSql.executeQuery();
		while (data.next())
		{
			ub.setName(data.getString(1));
			ub.setEmail(email);
			ub.setPassword(data.getString(3));
			ub.setPhone(data.getLong(4));
		}
		return ub;
	}
	
	public ArrayList<UserBean> allUser() throws SQLException
	{
		ArrayList<UserBean> list= new ArrayList<>();
		Connection con = DBconnection.getConnection();
		PreparedStatement dataSql = con.prepareStatement("select * from user_management_system");
		UserBean ub= new UserBean();
		ResultSet data = dataSql.executeQuery();
		while (data.next())
		{
			ub.setName(data.getString(1));
			ub.setEmail(data.getString(2));
			ub.setPassword(data.getString(3));
			ub.setPhone(data.getLong(4));
			list.add(ub);
		}
		return list;
	}

}
