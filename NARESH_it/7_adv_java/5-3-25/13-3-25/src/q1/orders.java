package q1;

import java.sql.Date;

public class orders implements Comparable<orders> {


	//
	//SQL> create table orders (order_id varchar2(10), customer_name varchar2(30), order_date date, total_amount number(7,2));
	//
	//Table created.
	//

	String order_id;
	String customer_name;
	Date order_date;
	double total_amount;

	public orders(String order_id, String customer_name, Date order_date, double total_amount) {
		super();
		this.order_id = order_id;
		this.customer_name = customer_name;
		this.order_date = order_date;
		this.total_amount = total_amount;
	}

	public String getOrder_id() {
		return order_id;
	}

	public String getCustomer_name() {
		return customer_name;
	}

	public Date getOrder_date() {
		return order_date;
	}

	public double getTotal_amount() {
		return total_amount;
	}

	@Override
	public String toString() {
		return "orders [order_id=" + order_id + ", customer_name=" + customer_name + ", order_date=" + order_date
				+ ", total_amount=" + total_amount + "]";
	}

	@Override
	public int compareTo(orders o) {
		return this.order_id.compareTo(o.order_id);
	}






}
