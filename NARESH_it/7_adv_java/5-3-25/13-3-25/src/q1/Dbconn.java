package q1;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.function.Function;
import java.util.stream.Collector;
import java.util.stream.Collectors;

//Program01:
//==========
//You are given a task to retrieve data from an
//Oracle database table orders with the columns:
//order_id, customer_name, order_date, and total_amount.
//
//
//SQL> create table orders (order_id varchar2(10), customer_name varchar2(30), order_date date, total_amount number(7,2));
//
//Table created.
//
//SQL>

//Establish a JDBC connection to Oracle.
//Execute a query to retrieve order_id, customer_name, order_date, and total_amount from the orders table.
//Convert the ResultSet into a list of Order objects.
//->Filter the orders where the total_amount is greater than 1000.
//->Sort the orders by order_id in ascending order.
//->Group the orders by customer_name.
//->Print the grouped orders, showing each customer’s name and the order details.

public class Dbconn {

	public static void main(String[] args) throws ClassNotFoundException, SQLException {
		Class.forName("oracle.jdbc.driver.OracleDriver");
		Connection conn= DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","system","123");
		PreparedStatement displayAll=conn.prepareStatement("select * from orders");
		ResultSet data = displayAll.executeQuery();
		ArrayList<orders> on=new ArrayList<orders>();

//		System.out.println("output");
		while (data.next())
		{
			on.add(new orders(data.getString(1), data.getString(2), data.getDate(3), data.getDouble(4)));
		}

		//->Filter the orders where the total_amount is greater than 1000.
//		on.stream().filter(i -> i.getTotal_amount()>1000).forEach(i -> System.out.println(i));

		//->Sort the orders by order_id in ascending order.
//		on.stream().sorted().forEach(i -> System.out.println(i));

		//->Group the orders by customer_name.
		 Map<String, List<orders>> groupedOrders =on.stream().collect(Collectors.groupingBy(i -> i.getCustomer_name()));
//		 groupedOrders.forEach((k,v) -> System.out.println(k+"  "+v+"\n"));

		//->Print the grouped orders, showing each customer’s name and the order details.
//		 groupedOrders.entrySet().stream()
//         .filter(entry -> entry.getValue().size() > 1)  // Only customers with more than 1 order
//         .forEach(entry -> {
//             System.out.println("\nCustomer: " + entry.getKey());
//             entry.getValue().forEach(System.out::println);
//         });
//
		 groupedOrders.entrySet().stream()
		 .filter(entry -> entry.getValue().size()>1)
		 .forEach(e -> System.out.println(e.getKey()+"  "+e.getValue()+"\n"));







	}

}
