package check_number;

import jakarta.servlet.GenericServlet;
import jakarta.servlet.ServletException;
import jakarta.servlet.ServletRequest;
import jakarta.servlet.ServletResponse;
import jakarta.servlet.annotation.WebServlet;
import java.io.IOException;
import java.util.ArrayList;

/**
 * Servlet implementation class CheckNumServlet
 */
@WebServlet("/cal")
public class CheckNumServlet extends GenericServlet {
	private static final long serialVersionUID = 1L;

	/**
	 * Default constructor.
	 */
	public CheckNumServlet() {
		// TODO Auto-generated constructor stub
	}

	/**
	 * @see Servlet#service(ServletRequest request, ServletResponse response)
	 */
	public void service(ServletRequest request, ServletResponse response) throws ServletException, IOException {
		int num = 0;

//		if (request.getParameter("num") == null) {
//			num = 0;
//		} 
		if(request.getParameter("num") != null)
		{
			num = Integer.parseInt(request.getParameter("num"));
			if (request.getParameter("Prime")!=null && request.getParameter("Prime").equals("Prime") ) 
			{
				boolean prime = prime(num);
				request.setAttribute("msg", prime);
				request.getRequestDispatcher("result.jsp").forward(request, response);
			}
			else {}
			if (request.getParameter("factorial")!=null && request.getParameter("factorial").equals("factorial"))
			{
				int factorial = factorial(num);
				request.setAttribute("msg", factorial);
				request.getRequestDispatcher("result.jsp").forward(request, response);
			}
			else {}
			if (request.getParameter("factor")!=null && request.getParameter("factor").equals("factor")) 
			{
				ArrayList<Integer> factor = factor(num);
				request.setAttribute("msg", factor);
				request.getRequestDispatcher("result.jsp").forward(request, response);
			}
			else {}
			if (request.getParameter("Square").equals("Square")) 
			{
				int square = square(num);
				request.setAttribute("msg", square);
				request.getRequestDispatcher("result.jsp").forward(request, response);
			}
			else {}
		}
	}

	private ArrayList<Integer> factor(int num) 
	{
		ArrayList<Integer> list= new ArrayList<>();
		for(int i=1;i<=num;i++)
		{
			if(num%i==0)
			{
				list.add(i);
			}
		}
		return list;
		
	}

	private int square(int num) {
		return num*num;
		
	}

	private int factorial(int num) {
		int fact=1;
		for(int i=1;i<=num;i++)
		{
			fact=fact*i;
		}
		return fact;
	}

	private boolean prime(int num) 
	{
		int k=0;
		for(int i=1;i<=num;i++)
		{
			if(num%i==0)
			{
				k++;
			}
		}
		if(k>2)
		{
			return false;
		}
		return true;
	}

}
