package test;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.Enumeration;
import jakarta.servlet.ServletException;
import jakarta.servlet.http.*;
import jakarta.servlet.ServletContext;


public class newServlet extends HttpServlet {
    private static final long serialVersionUID = 1L;
    
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {

        response.setContentType("text/html");
        PrintWriter out = response.getWriter();

        out.println("<h2>Context Initialization Parameters</h2>");

        ServletContext context = getServletContext();
        Enumeration<String> paramNames = context.getInitParameterNames();

        while (paramNames.hasMoreElements()) {
            String paramName = paramNames.nextElement();
            String paramValue=context.getInitParameter(paramName) ;
            out.println("<p><strong>" + paramName + "</strong>: " + paramValue + "</p>");
        }

        out.close();
    }
}
