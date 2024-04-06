import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class VowelCount {
 public static void main(String[] args) {
 String filename = "sample.txt"; // Replace with the path to your file
 int[] vowelCounts = new int[5]; // 0: a, 1: e, 2: i, 3: o, 4: u
 try (BufferedReader reader = new BufferedReader(new FileReader(filename)) )
 {String line;
    while ((line = reader.readLine()) != null) {
 line = line.toLowerCase();
  // Convert to lowercase for case insensitivity
 for (char c : line.toCharArray()) {
 if (c == 'a') {
 vowelCounts[0]++;
 } else if (c == 'e') {
 vowelCounts[1]++;
 } else if (c == 'i') {
 vowelCounts[2]++;
 } else if (c == 'o') {
 vowelCounts[3]++;
 } else if (c == 'u') {
 vowelCounts[4]++;
 }
 }
 }
 } catch (IOException e) {e.printStackTrace();}
 // Display the counts
 System.out.println("Number of occurrences of vowels in the file:");
 System.out.println("A/a: " + vowelCounts[0]);
 System.out.println("E/e: " + vowelCounts[1]);
 System.out.println("I/i: " + vowelCounts[2]);
 System.out.println("O/o: " + vowelCounts[3]);
 System.out.println("U/u: " + vowelCounts[4]);
 }
}
