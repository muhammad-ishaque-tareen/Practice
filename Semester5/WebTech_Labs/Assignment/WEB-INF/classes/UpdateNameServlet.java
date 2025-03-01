import java.io.*;
import java.sql.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class UpdateNameServlet extends HttpServlet {
    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        response.setContentType("text/html");
        PrintWriter out = response.getWriter();

        // Retrieve data from the request
        String id = request.getParameter("id");
        String DNAME = request.getParameter("DNAME");
        String DDOMAIN = request.getParameter("DDOMAIN");
        String DSALARY = request.getParameter("DSALARY");
        String DEXPERIENCE = request.getParameter("DEXPERIENCE");
        String DFEE = request.getParameter("DFEE");
        String DADDRESS = request.getParameter("DADDRESS");
        String DPHONE = request.getParameter("DPHONE");


        // Database connection details
        String url = "jdbc:mysql://localhost:3306/db";
        String username = "Tareen";
        String password = "Afn@n1234";

        Connection connection = null;
        PreparedStatement statement = null;

        try {
            // Load JDBC Driver
            Class.forName("com.mysql.cj.jdbc.Driver");
            connection = DriverManager.getConnection(url, username, password);

            // SQL query to update name based on ID
            String query = "UPDATE Doctor SET DNAME = ?,DDOMAIN=?,DSALARY=?,DEXPERIENCE=?,DFEE=?,DADDRESS=?,DPHONE=? WHERE DID = ?";
            statement = connection.prepareStatement(query);

            // Set parameters
            statement.setString(1, DNAME); // Set name
            statement.setString(2, DDOMAIN);
            statement.setInt(3, Integer.parseInt(DSALARY));
            statement.setString(4, DEXPERIENCE);
            statement.setInt(5, Integer.parseInt(DFEE));
            statement.setString(6, DADDRESS);
            statement.setString(7, DPHONE);
            // statement.setString(8, String.valueOf(id));
            statement.setInt(8, Integer.parseInt(id)); // Set id
            

            int rowsUpdated = statement.executeUpdate();

            if (rowsUpdated > 0) {
                out.println("<p>Name successfully updated for ID: " + id + "</p>");
            } else {
                out.println("<p>No record found with ID: " + id + "</p>");
            }

        } catch (NumberFormatException e) {
            out.println("<p>Invalid ID format. Please enter a numeric value for ID.</p>");
        } catch (Exception e) {
            out.println("<p>Error: " + e.getMessage() + "</p>");
        } finally {
            try { if (statement != null) statement.close(); } catch (SQLException e) { /* Ignored */ }
            try { if (connection != null) connection.close(); } catch (SQLException e) { /* Ignored */ }
        }
    }
}
