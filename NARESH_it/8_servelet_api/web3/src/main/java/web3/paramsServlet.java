package web3;

import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.Enumeration;

/**
 * Servlet implementation class paramsServlet
 */
@WebServlet("/collectParams")
public class paramsServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;

	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		
		response.setContentType("text/html");
		PrintWriter pw= response.getWriter();
		
		pw.println("<h2>Collected Parameters</h2>");
		Enumeration<String> parameterNames = request.getParameterNames();


		while (parameterNames.hasMoreElements()) {
			String paraname = (String) parameterNames.nextElement();
			pw.println(paraname);
			String val=(String) request.getParameter(paraname);
			pw.println(val+"<br>");
		}
		pw.close();
		
		
	}

}




