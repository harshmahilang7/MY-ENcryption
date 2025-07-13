package app;

import java.io.IOException;
import java.sql.SQLException;

import jakarta.servlet.*;
import jakarta.servlet.annotation.WebServlet;


/**
 * Servlet implementation class UserProfileServlet
 */
@WebServlet("/UserProfile")
public class UserProfileServlet extends GenericServlet implements Servlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see GenericServlet#GenericServlet()
     */
    public UserProfileServlet() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see Servlet#service(ServletRequest request, ServletResponse response)
	 */
	public void service(ServletRequest request, ServletResponse response) 
			throws ServletException, IOException 
	{
		String email = request.getParameter("email");
		UserBean ub = null;
		try {
			ub = new UserDAO().userByEmail(email);
		} catch (SQLException e) {
			e.printStackTrace();
		}
		if(ub==null)
		{
			request.setAttribute("userdata", "not inseted");
			request.getRequestDispatcher("error.jsp").forward(request, response);
		}
		else
		{
			request.setAttribute("userdata", ub);
			request.getRequestDispatcher("userdata.jsp").forward(request, response);
		}
		
		
	}

}
