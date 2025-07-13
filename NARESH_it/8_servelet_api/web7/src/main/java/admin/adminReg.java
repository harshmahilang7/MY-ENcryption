package admin;

import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
import java.io.IOException;

/**
 * Servlet implementation class adminlogin
 */

//SQL> create table admin_web7(username varchar2(30),password varchar2(30));
//
//Table created.
//
//SQL>
@WebServlet("/adminreg")
public class adminReg extends HttpServlet {
	private static final long serialVersionUID = 1L;
     
	
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		String uname = request.getParameter("uname");
		String pass = request.getParameter("pass");
		AdminBean ab= new AdminBean();
		ab.setUsername(uname);
		ab.setPassword(pass);
		int k = new AdminDAO().insert(ab);
		if(k>0)
		{
			request.setAttribute("msg", "added");
			request.getRequestDispatcher("msg.jsp").forward(request, response);
		}
		
		
	}

}
