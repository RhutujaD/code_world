

import java.io.IOException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class CheckServ
 */
@WebServlet("/CheckServ")
public class CheckServ extends HttpServlet {
	private static final long serialVersionUID = 1L;

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException
	{
		// TODO Auto-generated method stub
	String str = request.getParameter("sel");	
		
		if(str.equals("Java")) {
			RequestDispatcher rd = request.getRequestDispatcher("j2se.jsp");
			rd.forward(request, response);
		}
		if(str.equals("C++")) {
			RequestDispatcher rd = request.getRequestDispatcher("cplusplus.jsp");
			rd.forward(request, response);
		}
		if(str.equals("Oracle")) {
			RequestDispatcher rd = request.getRequestDispatcher("ora.jsp");
			rd.forward(request, response);
		}
	}
	}


