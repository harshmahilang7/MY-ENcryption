package app;

import java.io.IOException;
import java.sql.SQLException;

import jakarta.servlet.*;
import jakarta.servlet.annotation.*;

/**
 * Servlet implementation class RegisterServlet
 */
@WebServlet("/RegisterServlet")
public class RegisterServlet extends GenericServlet implements Servlet {
	private static final long serialVersionUID = 1L;

    /**
     * Default constructor. 
     */
    public RegisterServlet() {
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see Servlet#service(ServletRequest request, ServletResponse response)
	 */
	public void service(ServletRequest request, ServletResponse response) throws ServletException, IOException 
	{
		String name = request.getParameter("name");
		String email = request.getParameter("email");
		String password = request.getParameter("password");
		long phno = Long.parseLong(request.getParameter("phone"));
		UserBean ub= new UserBean();
		ub.setName(name);
		ub.setEmail(email);
		ub.setPassword(password);
		ub.setPhone(phno);
		try {
			int k = new UserDAO().insertUser(ub);
			
			if(k>0)
			{
				request.setAttribute("userdata", "inserted data sucessfully");
				request.getRequestDispatcher("error.jsp").forward(request, response);
			}
			else
			{
				request.setAttribute("userdata", "inserted data not sucessfully");
				request.getRequestDispatcher("error.jsp").forward(request, response);
			}
			
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		
		
		
	}

}
