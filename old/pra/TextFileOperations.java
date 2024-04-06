import java.io.File;
import java.io.FileWriter;
import java.io.FileReader;
import java.io.BufferedReader;
import java.io.IOException;
public class TextFileOperations {
 public static void main(String[] args) {
 // Create and write to a text file
 String filename = "sample.txt";
 writeToFile(filename, "This is a sample text file.");
 // Read and display the content of the file
 String content = readFromFile(filename);
 System.out.println("File content: " + content);
 // Modify the file by appending more text
 appendToFile(filename, "\nAppending some additional text.");
 // Read and display the modified content
 String modifiedContent = readFromFile(filename);
 System.out.println("Modified content: " + modifiedContent);
 }
 // Create a new text file and write content to it
 public static void writeToFile(String filename, String content) {
 try {
 FileWriter writer = new FileWriter(filename);
 writer.write(content);
 writer.close();
 System.out.println("File created and content written successfully.");
 } catch (IOException e) {
 e.printStackTrace();
 }
 }
 // Read content from an existing text file
 public static String readFromFile(String filename) {
 StringBuilder content = new StringBuilder();
 try {
 FileReader reader = new FileReader(filename);
 BufferedReader bufferedReader = new BufferedReader(reader);
 String line;
 while ((line = bufferedReader.readLine()) != null) {
 content.append(line).append("\n");
 }
 reader.close();
 } catch (IOException e) {
 e.printStackTrace();
 }
 return content.toString();
 }
 // Append content to an existing text file
 public static void appendToFile(String filename, String content) {
 try {
 FileWriter writer = new FileWriter(filename, true); 
 // Set the second parameter to true for append mode
 writer.write(content);
 writer.close();
 System.out.println("Content appended to the file.");
 } catch (IOException e) {
 e.printStackTrace();
 }
 }
}
