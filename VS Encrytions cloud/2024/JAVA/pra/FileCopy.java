import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
public class FileCopy {
 public static void main(String[] args) {
 String sourceFile = "source.txt";
 String destinationFile = "destination.txt";
 copyFile(sourceFile, destinationFile);
 System.out.println("File copied successfully.");
 }
 public static void copyFile(String sourceFile, String destinationFile) {
 try (FileInputStream fis = new FileInputStream(sourceFile);
 FileOutputStream fos = new FileOutputStream(destinationFile)) {
 byte[] buffer = new byte[1024];
 int bytesRead;
 while ((bytesRead = fis.read(buffer)) != -1) {
 fos.write(buffer, 0, bytesRead);
 }
 } catch (IOException e) {
 e.printStackTrace();
 }
 }
}
