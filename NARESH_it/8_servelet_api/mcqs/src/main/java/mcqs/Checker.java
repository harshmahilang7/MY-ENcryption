package mcqs;

import java.io.IOException;
import java.io.PrintWriter;

import jakarta.servlet.Servlet;
import jakarta.servlet.ServletConfig;
import jakarta.servlet.ServletException;
import jakarta.servlet.ServletRequest;
import jakarta.servlet.ServletResponse;
import jakarta.servlet.annotation.WebServlet;

@WebServlet("/quiz-result")
public class Checker implements Servlet
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
		String q1 = req.getParameter("q1");
		String q2 = req.getParameter("q2");
		String q3 = req.getParameter("q3");
		String q4 = req.getParameter("q4");
		String q5 = req.getParameter("q5");
		String q6 = req.getParameter("q6");
		String q7 = req.getParameter("q7");
		String q8 = req.getParameter("q8");
		String q9 = req.getParameter("q9");
		String q10 = req.getParameter("q10");
		int marks=0;
		int tmarks=10;
		if(q1==null)
		{
			
		}
		else if(q1.equals("1"))
		{
			marks++;
		}
		if(q2==null)
		{
			
		}
		else if(q2.equals("1"))
		{
			marks++;
		}
		if(q3==null)
		{
			
		}
		else if(q3.equals("1"))
		{
			marks++;
		}
		if(q4==null)
		{
			
		}
		else if(q4.equals("1"))
		{
			marks++;
		}
		if(q5==null)
		{
			
		}
		else if(q5.equals("1"))
		{
			marks++;
		}
		if(q6==null)
		{
			
		}
		else if(q6.equals("2"))
		{
			marks++;
		}
		if(q7==null)
		{
			
		}
		else if(q7.equals("1"))
		{
			marks++;
		}
		if(q8==null)
		{
			
		}
		else if(q8.equals("2"))
		{
			marks++;
		}
		if(q9==null)
		{
			
		}
		else if(q9.equals("1"))
		{
			marks++;
		}
		if(q10==null)
		{
			
		}
		else if(q10.equals("3"))
		{
			marks++;
		}
		PrintWriter pw=res.getWriter();
		res.setContentType("text/html");
		pw.println("****result****<br>");
		pw.println(marks+"/"+tmarks+"<br>");
		if(marks>=7&&marks<=10)
		{
			pw.println("good");
		}
		else if(marks>=4&&marks<7)
		{
			pw.println("ok");
		}
		else
		{
			pw.println("fail");
		}
		
	}
	
}
