

import java.io.IOException;
import java.io.PrintWriter;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class RegisterServ
 */
@WebServlet("/RegisterServ")
public class RegisterServ extends HttpServlet 
{
	private static final long serialVersionUID = 1L;

	
	private Connection con;
	
	
	public void init()
	{
		
		try
		{
			Class.forName("com.mysql.cj.jdbc.Driver");
			String url="jdbc:mysql://localhost:3306/mydb";
			con=DriverManager.getConnection(url,"root","shubham");
		}
		catch(Exception ee){
			ee.printStackTrace();
		}
	}
	public void doPost(HttpServletRequest request, HttpServletResponse response)
	{
		
		try {
			response.setContentType("text/html");
			PrintWriter pw=response.getWriter();
			
			String name = request.getParameter("name");
			String address = request.getParameter("address");
			String email = request.getParameter("email");
			String login = request.getParameter("login");
			String password = request.getParameter("password");
			
			PreparedStatement pst = con.prepareStatement("insert into user values(?,?,?,?,?)");
			pst.setString(1,name);
			pst.setString(2,address);
			pst.setString(3,email);
			pst.setString(4,login);
			pst.setString(5,password);
			
			int k = pst.executeUpdate();
			
			if(k>0)
			{
				pw.println("RECORD HAS BEEN SUCCESSFULLY ADDED");
			}
		}
		catch(Exception ee)
		{
			ee.printStackTrace();
		}
	}

}