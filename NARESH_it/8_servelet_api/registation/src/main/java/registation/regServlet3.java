package registation;

import jakarta.servlet.*;
import jakarta.servlet.annotation.WebServlet;

import java.io.*;
@WebServlet("/r3")
public class regServlet3 extends GenericServlet
{
	
	public void service(ServletRequest req,ServletResponse res)
	throws ServletException ,IOException
	{
		String state = req.getParameter("state");
		String country = req.getParameter("country");
		
		ServletContext sc = req.getServletContext();
		regbean bb = (regbean)sc.getAttribute("bean");
		bb.setState(state);
		bb.setCountry(country);
		
		PrintWriter pw= res.getWriter();
		res.setContentType("text/html");
		pw.println(bb.getEname()+"<br>");
		pw.println(bb.getEid()+"<br>");
		pw.println(bb.getFn()+"<br>");
		pw.println(bb.getMailid()+"<br>");
		pw.println(bb.getPhno()+"<br>");
		pw.println(bb.getState()+"<br>");
		pw.println(bb.getCountry()+"<br>");
		
	}

}
