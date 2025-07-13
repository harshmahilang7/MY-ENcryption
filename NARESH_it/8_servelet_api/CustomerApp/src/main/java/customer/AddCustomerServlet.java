package customer;

import java.io.IOException;

import jakarta.servlet.*;
import jakarta.servlet.annotation.WebServlet;

@SuppressWarnings("serial")
@WebServlet("/add")
public class AddCustomerServlet extends GenericServlet
{

	@Override
	public void service(ServletRequest req, ServletResponse res)
			throws ServletException, IOException 
	{
		CustomerBean cb= new CustomerBean();
		cb.setId("NIT"+req.getParameter("phono"));
		cb.setName(req.getParameter("name"));
		cb.setCity(req.getParameter("city"));
		cb.setPhno(Long.parseLong(req.getParameter("phono")));
		int k=new AddCustomerDAO().insert(cb);
		if(k>0)
		{
			req.setAttribute("msg", "added Successfully");
			RequestDispatcher rd=req.getRequestDispatcher("AddCustomer.jsp");
			rd.forward(req, res);
		}
		
		
		
		
	}

}
