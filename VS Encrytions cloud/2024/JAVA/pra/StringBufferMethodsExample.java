public class StringBufferMethodsExample {
 public static void main(String[] args) {
 // Create a StringBuffer
 StringBuffer buffer = new StringBuffer("Hello, ");
 // Append text
 buffer.append("World!");
 System.out.println("Appended: " + buffer);
 // Insert text at a specific position
 buffer.insert(6, "Java ");
 System.out.println("Inserted: " + buffer);
 // Delete characters
 buffer.delete(6, 11);
 System.out.println("Deleted: " + buffer);
 // Reverse the string
 buffer.reverse();
 System.out.println("Reversed: " + buffer);
 // Set character at a specific position
 buffer.setCharAt(0, 'h');
 System.out.println("Set character: " + buffer);
 // Get the length and capacity
 int length = buffer.length();
 int capacity = buffer.capacity();
 System.out.println("Length: " + length);
 System.out.println("Capacity: " + capacity);
 // Ensure capacity
 buffer.ensureCapacity(30);
 // Trim the capacity to the length of the string
 buffer.trimToSize();
 // Convert StringBuffer to String
 String str = buffer.toString();
 System.out.println("Converted to String: " + str);
 }
}
