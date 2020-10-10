

import java.io.*;
import java.util.ArrayList;
import java.util.List;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

/**
 * Servlet implementation class MyServlet1
 */
@WebServlet("/MyServlet1")
public class MyServlet1 extends HttpServlet {
	private static final long serialVersionUID = 1L;

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		List<String>mylist=new ArrayList<>();
		mylist.add("pranit");
		mylist.add("pandurang");
		mylist.add("Rajesh");
		mylist.add("Sonali");
		mylist.add("Shubham");
		HttpSession session=request.getSession();
		session.setAttribute("members",mylist);
		PrintWriter pw=response.getWriter();
		pw.println("session has been created");
		
		
		
	}

}
