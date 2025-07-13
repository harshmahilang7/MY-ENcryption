package managing_employee_data;

import jakarta.servlet.*;
import jakarta.servlet.annotation.*;
import java.io.*;
import java.util.ArrayList;


@SuppressWarnings("serial")
@WebServlet("/alldata")
public class alldataServlet  extends GenericServlet
{

	@Override
	public void service(ServletRequest req, ServletResponse res) throws ServletException, IOException {
		ArrayList<EmployeeBean> allEmployees = new EmployeeDAO().getAllEmployees();
		ServletContext sc = req.getServletContext();
		//sc.setAttribute("alldata", allEmployees);
		req.setAttribute("alldata", allEmployees);
		req.getRequestDispatcher("alldata.jsp").forward(req, res);
		
	}

}
