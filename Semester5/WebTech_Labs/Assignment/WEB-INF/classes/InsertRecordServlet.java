import java.io.*;
import java.sql.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class InsertRecordServlet extends HttpServlet {
    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        response.setContentType("text/html");
        PrintWriter out = response.getWriter();

        // Retrieve data from the request
        String column1 = request.getParameter("column1");
        String column2 = request.getParameter("column2");
        String column3 = request.getParameter("column3");
        String column4 = request.getParameter("column4");
        String column5 = request.getParameter("column5");
        String column6 = request.getParameter("column6");
        String column7 = request.getParameter("column7");
        String column8 = request.getParameter("column8");

        // Database connection details
        String url = "jdbc:mysql://localhost:3306/db";
        String username = "Tareen";
        String password = "Afn@n1234";

        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection connection = DriverManager.getConnection(url, username, password);

            String query = "INSERT INTO    DOCTOR (DID, DNAME, DDOMAIN,DSALARY, DEXPERIENCE, DFEE,DADDRESS,DPHONE ) VALUES (?, ?,?,?,?,?,?,?)";
            PreparedStatement statement = connection.prepareStatement(query);
            statement.setString(1, column1);
            statement.setString(2, column2);
            statement.setString(3, column3);
            statement.setString(4, column4);
            statement.setString(5, column5);
            statement.setString(6, column6);
            statement.setString(7, column7);
            statement.setString(8, column8);

            int rowsInserted = statement.executeUpdate();

            if (rowsInserted > 0) {
                out.println("<p>Record successfully inserted!</p>");
            } else {
                out.println("<p>Failed to insert record.</p>");
            }

            connection.close();
        } catch (Exception e) {
            out.println("<p>Error: " + e.getMessage() + "</p>");
        }
    }
}
