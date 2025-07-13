package managing_employee_data;

import jakarta.servlet.*;
import jakarta.servlet.annotation.*;
import java.io.*;


@SuppressWarnings("serial")
@WebServlet("/data")
public class EmployeeServlet extends GenericServlet
{

	@Override
	public void service(ServletRequest req, ServletResponse res) 
			throws ServletException, IOException 
	{
		EmployeeBean eb= new EmployeeBean();
		eb.setEid(Integer.parseInt(req.getParameter("id")));
		eb.setName(req.getParameter("name"));
		eb.setEmail(req.getParameter("email"));
		eb.setDept(req.getParameter("dept"));
		eb.setSal(Double.parseDouble(req.getParameter("sal")));
		int saveEmployee = new EmployeeDAO().saveEmployee(eb);
		if (saveEmployee>0) 
		{
			ServletContext sc = req.getServletContext();
			sc.setAttribute("msg", "added");
			req.getRequestDispatcher("added.jsp").forward(req, res);
		}
		else
		{
			ServletContext sc = req.getServletContext();
			sc.setInitParameter("msg", "not added");
			req.getRequestDispatcher("error.jsp").forward(req, res);
		}
		
		
	}


}
