package web;
import jakarta.servlet.*;
import jakarta.servlet.annotation.*;
import java.io.*;
import java.sql.SQLException;
@SuppressWarnings("serial")
@WebServlet("/dis")
public class webServelet extends GenericServlet
{

	@Override
	public void service(ServletRequest req, ServletResponse res) throws ServletException, IOException {
		test1bean tt=new test1bean();
		tt.setId(req.getParameter("id"));
		tt.setName(req.getParameter("uname"));
		try {
			int retrive = new testDAO().retrive(tt);
			if(retrive>0)
			{
				ServletContext sc = req.getServletContext();
				sc.setAttribute("msg", "done");
				req.getRequestDispatcher("added.jsp").forward(req, res);
			}
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		
	}

}
