package customer;

import java.io.IOException;

import jakarta.servlet.*;
import jakarta.servlet.annotation.WebServlet;

@SuppressWarnings("serial")
@WebServlet("/byid")
public class ViewCustomerByIdServlet extends GenericServlet
{

	@Override
	public void service(ServletRequest req, ServletResponse res) throws ServletException, IOException {
		// TODO Auto-generated method stub
		String id = req.getParameter("id");
		CustomerBean retrive = new ViewCustomerByIdDAO().retrive(id);
		if(retrive == null)
		{
			req.setAttribute("msg", "invalid Customer id<br>");
			RequestDispatcher rd = req.getRequestDispatcher("msg.jsp");
			rd.forward(req, res);
		}
		else
		{
			req.setAttribute("data", retrive);
			RequestDispatcher rd = req.getRequestDispatcher("ViewByCustomerId.jsp");
			rd.forward(req, res);
		}
		
		
	}

}
