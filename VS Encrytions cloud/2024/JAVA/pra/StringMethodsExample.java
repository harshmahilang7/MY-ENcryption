public class StringMethodsExample {
 public static void main(String[] args) {
 String str1 = "Hello, World!";
 String str2 = "Java Programming";
 String str3 = " Welcome to SSPU ";
 // Length of a String
 int length = str1.length();
 System.out.println("Length of str1: " + length);
 // Concatenation
 String concatStr = str1.concat(" This is Java.");
 System.out.println("Concatenated String: " + concatStr);
 // Character at a specific index
 char charAtIndex = str2.charAt(4);
 System.out.println("Character at index 4 in str2: " + charAtIndex);
 // Substring
 String subStr = str2.substring(5, 15);
 System.out.println("Substring of str2: " + subStr);
 // Uppercase and lowercase
 String upperCaseStr = str1.toUpperCase();
 String lowerCaseStr = str2.toLowerCase();
 System.out.println("Uppercase of str1: " + upperCaseStr);
 System.out.println("Lowercase of str2: " + lowerCaseStr);
 // Trimming
 String trimmedStr = str3.trim();
 System.out.println("Trimmed str3: " + trimmedStr);
 // Searching
 boolean containsWord = str2.contains("Java");
 int indexOfSubstring = str1.indexOf("World");
 int lastIndex = str1.lastIndexOf("l");
 System.out.println("str2 contains 'Java': " + containsWord);
 System.out.println("Index of 'World' in str1: " + indexOfSubstring);
 System.out.println("Last index of 'l' in str1: " + lastIndex);
 // Replacing
 String replacedStr = str1.replace("Hello", "Hi");
 System.out.println("Replaced str1: " + replacedStr);
 // Splitting
 String[] words = str2.split(" ");
 for (String word : words) {
 System.out.println("Split: " + word);
 }
 // Comparing strings
 boolean isEqual = str1.equals(str2);
 boolean isEqualIgnoreCase = str1.equalsIgnoreCase(str2);
 int compareToResult = str1.compareTo(str2);
 System.out.println("str1 equals str2: " + isEqual);
 System.out.println("str1 equals str2 (ignore case): " +isEqualIgnoreCase);
 System.out.println("Comparison result (str1 vs str2): " +compareToResult);
 }
} 