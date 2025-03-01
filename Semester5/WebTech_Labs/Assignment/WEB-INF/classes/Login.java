import java.io.*;                                                            //Login.java
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.ResultSetMetaData;

import javax.servlet.*;  
import javax.servlet.http.*; 
public class Login extends HttpServlet { 
public void doPost(HttpServletRequest request, HttpServletResponse response)  
        throws ServletException, IOException {  
    response.setContentType("text/html");  
    PrintWriter out = response.getWriter();    

    try (Connection connection = DatabaseConnection.initializeDatabase()) {
            String query = "SELECT * FROM DOCTOR";
            PreparedStatement statement = connection.prepareStatement(query);

            ResultSet resultSet = statement.executeQuery();

             // Display data in HTML table
            out.println("<html><body>");
            out.println("<h2>Data from DOCTOR</h2>");
            out.println("<table border='1'><tr>");

            // Get column names dynamically
            ResultSetMetaData metaData = resultSet.getMetaData();
            int columnCount = metaData.getColumnCount();
            for (int i = 1; i <= columnCount; i++) {
                out.println("<th>" + metaData.getColumnName(i) + "</th>");
            }
            out.println("</tr>");

            // Display rows
            while (resultSet.next()) {
                out.println("<tr>");
                for (int i = 1; i <= columnCount; i++) {
                    out.println("<td>" + resultSet.getString(i) + "</td>");
                }
                out.println("</tr>");
            }
            out.println("</table>");
            out.println("</body></html>");
        } catch (Exception e) {
            e.printStackTrace();
        }

    } 
} 
