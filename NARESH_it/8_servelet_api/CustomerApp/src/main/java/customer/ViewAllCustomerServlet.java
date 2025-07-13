package customer;

import java.io.IOException;
import java.util.ArrayList;
import java.util.Iterator;

import jakarta.servlet.GenericServlet;
import jakarta.servlet.RequestDispatcher;
import jakarta.servlet.ServletException;
import jakarta.servlet.ServletRequest;
import jakarta.servlet.ServletResponse;
import jakarta.servlet.annotation.WebServlet;

@WebServlet("/alldata")
public class ViewAllCustomerServlet extends GenericServlet
{

	@Override
	public void service(ServletRequest req, ServletResponse res) 
			throws ServletException, IOException 
	{
		ArrayList<CustomerBean> allData = new AllCustomerDAO().allData();
		if(allData==null)
		{
			req.setAttribute("msg", "no records Available<br>");
			RequestDispatcher rd = req.getRequestDispatcher("msg.jsp");
			rd.forward(req, res);
		}
		else
		{
			req.setAttribute("data", allData);
			RequestDispatcher rd = req.getRequestDispatcher("AllCustomer.jsp");
			rd.forward(req, res);
		}
		
		
	}

}
