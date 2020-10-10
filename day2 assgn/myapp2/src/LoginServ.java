

import java.io.IOException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class LoginServ
 */
@WebServlet("/LoginServ")
public class LoginServ extends HttpServlet {
	private static final long serialVersionUID = 1L;
	String login=null;
	String password=null;

	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws IOException{
		login=request.getParameter("login");
		password=request.getParameter("password");
		try
		{
			Class.forName("com.mysql.cj.jdbc.Driver");
			String url="jdbc:mysql://localhost:3306/mydb";
			Connection con=DriverManager.getConnection(url,"root","shubham");
			
			Statement st=con.createStatement();
			ResultSet rs=null;
			
			String str="select * from user where login='"+login+"' and password='"+password+"'";
			rs=st.executeQuery(str);
			
			if(rs.next())
			{
				response.sendRedirect("success.html");
			}
			else
			{
				response.sendRedirect("fail.html");
			}
		}
		catch(Exception ee)
		{
			System.out.println(ee);
		}
		
	}

}