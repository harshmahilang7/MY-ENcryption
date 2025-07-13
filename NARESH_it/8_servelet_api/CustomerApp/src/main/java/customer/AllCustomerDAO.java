package customer;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.ArrayList;

public class AllCustomerDAO 
{
	ArrayList<CustomerBean> listCust= new ArrayList<>();
	public ArrayList<CustomerBean> allData()
	{
		
		try {
			Connection con=DBConnection.getConn();
			PreparedStatement allDatasql = con.prepareStatement("select * from customer72");
			ResultSet allData = allDatasql.executeQuery();
			while(allData.next())
			{
				CustomerBean cb=new CustomerBean();
				cb.setId(allData.getString(1));
				cb.setName(allData.getString(2));
				cb.setCity(allData.getString(3));
				cb.setPhno(allData.getLong(4));
				listCust.add(cb);
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
		return listCust;
	}

}
