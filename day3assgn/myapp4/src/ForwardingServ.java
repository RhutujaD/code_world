

import java.io.IOException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.List;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class ForwardingServ
 */
@WebServlet("/ForwardingServ")
public class ForwardingServ extends HttpServlet {
	private static final long serialVersionUID = 1L;

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		try
		{
			Class.forName("com.mysql.cj.jdbc.Driver");
			String url="jdbc:mysql://localhost:3306/mydb";
			System.out.println("getting connection");
			Connection con=DriverManager.getConnection(url,"root","shubham");
			System.out.println("got connection");
			
			Statement st=con.createStatement();
			ResultSet rs=null;
		String str="select loc from dept";
		rs=st.executeQuery(str);
			List<String> loc=new ArrayList<>();
		while(rs.next())
		{
			String n=rs.getString("loc");
			loc.add(n);
		}
		
			response.setContentType("text/html");
			request.setAttribute("location", loc);
			RequestDispatcher rd=request.getRequestDispatcher("ForwardedServ");
			rd.forward(request,response);
			
		}
		catch(Exception ee)
		{
			System.out.println("in forwarding"+ee);
		}
	}

}
