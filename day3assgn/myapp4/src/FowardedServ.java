

import java.io.IOException;
import java.io.PrintWriter;
import java.util.List;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class FowardedServ
 */
@WebServlet("/FowardedServ")
public class FowardedServ extends HttpServlet {
	private static final long serialVersionUID = 1L;

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		try
		{   PrintWriter pw=response.getWriter();
		   pw.println("In ForwardedServlet");
			response.setContentType("text/html");
			List<String> loc1=(List<String>)request.getAttribute("location");
            System.out.println(loc1);
			
	}
		catch(Exception ee)
		{
			System.out.println("in forwarding"+ee);
		}
		finally
		{
			System.out.println("in forwarded finally block");
		}
	}
	}
