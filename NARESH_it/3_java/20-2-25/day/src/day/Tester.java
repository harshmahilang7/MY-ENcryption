package day;

import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class Tester {


    public static void main(String... args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("hwll");
        int size = sc.nextInt();
        sc.nextLine(); // Consume the newline character to avoid skipping input

        String[] name = new String[size];
        for (int i = 0; i < size; i++) {
            name[i] = sc.nextLine(); // Read full string input
        }

        List<String> result = Arrays.asList(name);
        System.out.println("Converted List: " + result);
        
        

    }
}
