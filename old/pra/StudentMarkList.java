import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Statement;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

public class StudentMarkList {
    static final String JDBC_URL = "jdbc:mysql://localhost:3306/your_database";
    // Change to your database URL
    static final String JDBC_USER = "your_username"; // Change to your database username
    static final String JDBC_PASSWORD = "your_password"; // Change to your database password

    public static void main(String[] args) {
        Connection connection = null;
        try {
            // Establish a connection to the database
            connection = DriverManager.getConnection(JDBC_URL, JDBC_USER,
                    JDBC_PASSWORD);
            // Create a table to store student marks (if it doesn't exist)
            createStudentMarksTable(connection);
            // Insert student records
            insertStudentRecord(connection, 1, "Alice", "Math", 95);
            insertStudentRecord(connection, 2, "Bob", "History", 88);
            insertStudentRecord(connection, 3, "Charlie", "Science", 92);
            // Query and display student marks
            queryAndDisplayStudentMarks(connection);
            // Update a student's marks
            updateStudentMarks(connection, 1, 98);
            // Query and display updated student marks
            queryAndDisplayStudentMarks(connection);
        } catch (SQLException e) {
            e.printStackTrace();
        } finally {
            try {
                if (connection != null) {
                    connection.close();
                }
            } catch (SQLException e) {
                e.printStackTrace();
            }
        }
    }

    private static void createStudentMarksTable(Connection connection) throws SQLException {
        Statement statement = connection.createStatement();
        String createTableSQL = "CREATE TABLE IF NOT EXISTS students (" +
                "student_id INT PRIMARY KEY, " +
                "student_name VARCHAR(255), " +
                "subject VARCHAR(255), " +
                "marks INT)";
        statement.execute(createTableSQL);
        statement.close();
    }

 private static void insertStudentRecord(Connection connection, int id, 
String name, String subject, int marks) throws SQLException {
 String insertSQL = "INSERT INTO students (student_id, student_name,subject, marks) VALUES (?, ?, ?, ?)";
 PreparedStatement preparedStatement = 
connection.prepareStatement(insertSQL);
 preparedStatement.setInt(1, id);
 preparedStatement.setString(2, name);
 preparedStatement.setString(3, subject);
 preparedStatement.setInt(4, marks);
 preparedStatement.executeUpdate();
 preparedStatement.close();
 }

    private static void queryAndDisplayStudentMarks(Connection connection)
            throws SQLException {
        String querySQL = "SELECT * FROM students";
        Statement statement = connection.createStatement();
        ResultSet resultSet = statement.executeQuery(querySQL);
        System.out.println("Student Marks List:");
        System.out.println("Student ID | Student Name | Subject | Marks");
        while (resultSet.next()) {
            int studentId = resultSet.getInt("student_id");
            String studentName = resultSet.getString("student_name");
            String subject = resultSet.getString("subject");
            int marks = resultSet.getInt("marks");
            System.out.println(studentId + " | " + studentName + " | " + subject
                    + " | " + marks);
        }
        resultSet.close();
        statement.close();
    }

    private static void updateStudentMarks(Connection connection, int id, int newMarks) throws SQLException {
        String updateSQL = "UPDATE students SET marks = ? WHERE student_id = ?";
        PreparedStatement preparedStatement = connection.prepareStatement(updateSQL);
        preparedStatement.setInt(1, newMarks);
        preparedStatement.setInt(2, id);
        preparedStatement.executeUpdate();
        preparedStatement.close();
    }
}