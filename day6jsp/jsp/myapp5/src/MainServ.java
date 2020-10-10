
import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class MainServ
 */
@WebServlet("/MainServ")
public class MainServ extends HttpServlet {
	private static final long serialVersionUID = 1L;

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) {
		
		
		try {
			String user = request.getParameter("name");
			String pass = request.getParameter("pass");
		
		if(user.equals("scott") && pass.equals("tiger")) {
			RequestDispatcher rd = request.getRequestDispatcher("Welcome.jsp");
			rd.forward(request, response);
		}
		else {
			PrintWriter out = response.getWriter();
			out.println("Incorrect username or password !!!!");
		}
		}
		catch(Exception ee) {
			ee.printStackTrace();
		}
	}

}
