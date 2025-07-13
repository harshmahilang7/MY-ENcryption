package registation;

import java.io.IOException;

import jakarta.servlet.*;
import jakarta.servlet.annotation.WebServlet;

@WebServlet("/r1")
public class regiServelet1 extends GenericServlet {

	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;

	@Override
	public void service(ServletRequest req, ServletResponse res) 
			throws ServletException, IOException
	{
		String ename = req.getParameter("empname");
		String eid = req.getParameter("empid");
		String fn = req.getParameter("Fname");
		regbean bb= new regbean();
		bb.setEname(ename);
		bb.setEid(eid);
		bb.setFn(fn);
		ServletContext sc = req.getServletContext();  //
		sc.setAttribute("bean", bb);
		RequestDispatcher rd =req.getRequestDispatcher("reg2.html");
		rd.forward(req, res);
	}

}
