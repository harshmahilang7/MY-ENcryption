package test;

import jakarta.servlet.ServletConfig;
import jakarta.servlet.ServletContext;
import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.Enumeration;


public class newServlet1 extends HttpServlet {
	private static final long serialVersionUID = 1L;
       

	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		
		
		response.setContentType("text/html");
		PrintWriter pw = response.getWriter();
		ServletContext servletContext = getServletContext();
		Enumeration<String> initParameterNames = servletContext.getInitParameterNames();
		while (initParameterNames.hasMoreElements()) {
			String string = (String) initParameterNames.nextElement();
			String val=(String) getInitParameter(string);
			pw.print(string+val);
			
			
		}
		pw.print("<br>");
		
		ServletConfig servletConfig = getServletConfig();
		
		Enumeration<String> initParameter = servletConfig.getInitParameterNames();
		while (initParameter.hasMoreElements()) {
			String string = (String) initParameter.nextElement();
			String val=(String) getInitParameter(string);
			pw.print(string+val);
			
			
		}
		
		
		
		
	}

}
