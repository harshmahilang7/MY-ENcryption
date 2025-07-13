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
import java.util.Date;


@WebServlet("/def")
public class ConfigDemoServlet extends HttpServlet
{
	
	private static final long serialVersionUID = 1L;
       
    public ConfigDemoServlet() {
        super();
     
    }
    String starttime,appname;
    @Override
    public void init() throws ServletException {
    
    super.init();
    ServletContext sc = getServletContext();
    starttime="12:90:00";
	appname="AttributeDemoApp";
	sc.setInitParameter(appname,starttime);
    }
    
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		response.setContentType("text/html");
		PrintWriter pw = response.getWriter();
		ServletContext sc = getServletContext();
		String defaultUser = request.getParameter("defaultUser");
		if(!defaultUser.isEmpty())
		{
			pw.println(defaultUser+"<br>");
		}
		else
		{
			defaultUser=sc.getInitParameter("defaultuser");
		}
		Integer maxAttempts = Integer.parseInt(request.getParameter("maxAttempts"));
		if(maxAttempts==0)
		{
			maxAttempts=Integer.parseInt(sc.getInitParameter("maxAttempts"));
		}
		pw.println("output"+"<br>");
		pw.println(defaultUser+"<br>");
		pw.print(maxAttempts+"<br>");
		pw.close();
		
	}

	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
