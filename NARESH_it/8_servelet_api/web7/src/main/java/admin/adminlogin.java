package admin;

import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
import jakarta.servlet.http.HttpSession;

import java.io.IOException;

/**
 * Servlet implementation class adminlogin
 */
@WebServlet("/adminlogin")
public class adminlogin extends HttpServlet {
	private static final long serialVersionUID = 1L;
    
	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		String userName = request.getParameter("uname");
		String pass = request.getParameter("pass");
		int check = new loginDAO().check(userName, pass);
		if(check==2)
		{
			// login
			AdminBean ab= new AdminBean();
			ab.setUsername(userName);
			ab.setPassword(pass);
			HttpSession hs = request.getSession();
			hs.setAttribute("ab", ab);
			request.setAttribute("msg", "login succsefully ");
			request.getRequestDispatcher("login.jsp").forward(request, response);
		}
		else if (check==1)
		{
			request.setAttribute("msg", "password is wrong");
			request.getRequestDispatcher("msg.jsp").forward(request, response);
		}
		else
		{
			request.setAttribute("msg", "username and password is wrong");
			request.getRequestDispatcher("msg.jsp").forward(request, response);
		}
		
	}

}
