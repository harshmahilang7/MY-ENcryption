package web1;

import java.io.*;
import jakarta.servlet.*;
import jakarta.servlet.annotation.*;


@WebServlet("/dis")
public class DisplayServlet implements Servlet
{
	@Override
	public void init(ServletConfig scf) throws ServletException
	{
		
		
	}
	
	@Override
	public void service(ServletRequest req,ServletResponse res)
	throws ServletException,IOException
	{
		String uname=req.getParameter("uname");
		String mid=req.getParameter("mid");
		Long phno=Long.parseLong(req.getParameter("phno"));
		PrintWriter pw=res.getWriter();
		res.setContentType("text/HTML");
		pw.println("details<br>");
		pw.println("username :"+uname+"<br>");
		pw.println("mail id :"+mid+"<br>");
		pw.println("phono number"+phno+"<br>");
		
		
	}
	
	@Override
	public void destroy()
	{
		
	}
	
	@Override
	public String getServletInfo()
	{
		return "servlet details";
	}
	
	@Override
	public ServletConfig getServletConfig()
	{
		return this.getServletConfig();
	}

}
