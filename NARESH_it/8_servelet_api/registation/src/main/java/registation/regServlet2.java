package registation;



import java.io.IOException;

import jakarta.servlet.*;
import jakarta.servlet.annotation.WebServlet;

@WebServlet("/r2")
public class regServlet2 extends GenericServlet
{
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;

	@Override
	public void service(ServletRequest req, ServletResponse res)
			throws ServletException, IOException {
		String mailid=req.getParameter("mailid");
		String phno=req.getParameter("phno");
		
		ServletContext sc= req.getServletContext();
		regbean bb = (regbean)sc.getAttribute("bean");
		
		bb.setMailid(mailid);
		bb.setPhno(phno);
		
		RequestDispatcher rd=req.getRequestDispatcher("reg3.html");
		rd.forward(req, res);
		
		
		
	}

}