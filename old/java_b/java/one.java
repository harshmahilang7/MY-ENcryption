/**
 * @Author: Dastan_Alam
 * @Date:   13-08-2023 08:01:50 PM       20:01:50
 * @Last Modified by:   Dastan_Alam
 * @Last Modified time: 13-08-2023 08:42:30 PM       20:42:30
 */
import java.util.Scanner; // Import the Scanner class

class one {
  public static void main(String[] args) {
    try (Scanner myObj = new Scanner(System.in)) {
        System.out.println("Enter username");

        String userName = myObj.nextLine();  // Read user input
        System.out.println("Username is: " + userName);  // Output user input
    }
  }
}