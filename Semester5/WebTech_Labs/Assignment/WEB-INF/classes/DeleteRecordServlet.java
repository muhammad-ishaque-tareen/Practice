import java.io.*;  
import java.sql.*;  
import javax.servlet.*;  
import javax.servlet.http.*;  

public class DeleteRecordServlet extends HttpServlet {  
    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {  
        response.setContentType("text/html");  
        PrintWriter out = response.getWriter();  

        // Retrieve ID from the request  
        String DID = request.getParameter("DID");
        System.out.println("Received DID: " + DID);   

        // Database connection details  
        String url = "jdbc:mysql://localhost:3306/db";  
        String username = "Tareen";  
        String password = "Afn@n1234";  

        Connection connection = null;  
        PreparedStatement statement = null;  

        try {  
            // Check if DID is valid and not empty  
            if (DID == null || DID.trim().isEmpty()) {  
                out.println("<p>ID cannot be empty. Please enter a numeric value for ID.</p>");  
                return; // Exit if the ID is invalid  
            }  

            // Load JDBC Driver  
            Class.forName("com.mysql.cj.jdbc.Driver");  
            connection = DriverManager.getConnection(url, username, password);  

            // SQL query to delete record based on ID  
            String query = "DELETE FROM DOCTOR WHERE DID = ?";  
            statement = connection.prepareStatement(query);  

            // Set parameter for the ID  
            statement.setInt(1, Integer.parseInt(DID));  

            int rowsDeleted = statement.executeUpdate();  

            if (rowsDeleted > 0) {  
                out.println("<p>Record successfully deleted for ID: " + DID + "</p>");  
            } else {  
                out.println("<p>No record found with ID: " + DID + "</p>");  
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