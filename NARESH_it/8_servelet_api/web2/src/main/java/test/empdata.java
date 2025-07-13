package test;



import java.io.IOException;
import java.io.PrintWriter;
import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Arrays;

import jakarta.servlet.Servlet;
import jakarta.servlet.ServletConfig;
import jakarta.servlet.ServletException;
import jakarta.servlet.ServletRequest;
import jakarta.servlet.ServletResponse;
import jakarta.servlet.annotation.WebServlet;

@WebServlet("/data")
public class empdata implements Servlet
{

	@Override
	public void destroy() {
		// TODO Auto-generated method stub
		
	}

	@Override
	public ServletConfig getServletConfig() {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public String getServletInfo() {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public void init(ServletConfig arg0) throws ServletException {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void service(ServletRequest req, ServletResponse res) throws ServletException, IOException {
		// TODO Auto-generated method stub
		
		String n=req.getParameter("name");
		String a=req.getParameter("age");
		String sal=req.getParameter("sal");
		String e=req.getParameter("mid");
		String g=req.getParameter("Gender");
		
//		String p=req.getParameter("Playing");
//		String r=req.getParameter("Reading");
//		String Searching=req.getParameter("Searching");
//		String slepping=req.getParameter("Sleeping");
//		ArrayList<String> Hobbies= new ArrayList<>();
//		if(p!=null)
//		{
//		Hobbies.add(p);
//		}
//		if(r!=null)
//		{
//		Hobbies.add(r);
//		}
//		if(Searching!=null)
//		{
//		Hobbies.add(Searching);
//		}
//		if(slepping!=null)
//		{
//		Hobbies.add(slepping);
//		}
		
		String[] parameterValues = req.getParameterValues("Hobbies");
		String state=req.getParameter("state");
		
		
		PrintWriter pw=res.getWriter();
		res.setContentType("text/html");
		pw.println("****emp data****<br>");
		pw.println("Emp name: "+n+"<br>");
		pw.println("Emp age: "+a+"<br>");
		pw.println("Emp sal: "+sal+"<br>");
		pw.println("Emp email: "+e+"<br>");
		pw.println("Emp gender: "+g+"<br>");
		pw.print("Emp Hobbies:");
		
//		Object[] h = Hobbies.toArray();
		int i=0;
		for (Object object : parameterValues) 
		{
			
			if(parameterValues.length-1==i)
			{
				pw.print(object);
			}
			else
			{
				pw.print(object+",");
				i++;
			}
		}
		
		pw.println("<br>Emp state: "+state+"<br>");
		
		
		
		
		
	}

}
