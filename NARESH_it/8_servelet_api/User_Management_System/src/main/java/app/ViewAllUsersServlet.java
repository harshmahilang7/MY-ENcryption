package app;

import jakarta.servlet.GenericServlet;
import jakarta.servlet.ServletException;
import jakarta.servlet.ServletRequest;
import jakarta.servlet.ServletResponse;
import jakarta.servlet.annotation.WebServlet;
import java.io.IOException;
import java.sql.SQLException;
import java.util.ArrayList;


/**
 * Servlet implementation class ViewAllUsersServlet
 */

@SuppressWarnings("serial")
@WebServlet("/ViewAllUsers")
public class ViewAllUsersServlet extends GenericServlet  {
	
       
    /**
     * @see GenericServlet#GenericServlet()
     */
    public ViewAllUsersServlet() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see Servlet#service(ServletRequest request, ServletResponse response)
	 */
	public void service(ServletRequest request, ServletResponse response) throws ServletException, IOException {
		ArrayList<UserBean> allUser=null;
		try {
			allUser = new UserDAO().allUser();
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		request.setAttribute("alldata", allUser);
		request.getRequestDispatcher("alldata.jsp").forward(request, response);
	}

}
