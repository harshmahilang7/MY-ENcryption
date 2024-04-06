class MyThread extends Thread {
 public MyThread(String name) {
 super(name);
 }
 @Override
 public void run() {
 for (int i = 0; i < 5; i++) {
 System.out.println(getName() + ": SSPU");
 }
 }
}
public class ThreadExample {
 public static void main(String[] args) {
 // Create multiple threads and start them
 MyThread thread1 = new MyThread("Thread 1");
 MyThread thread2 = new MyThread("Thread 2");
 MyThread thread3 = new MyThread("Thread 3");
 thread1.start();
 thread2.start();
 thread3.start();
 }
}
