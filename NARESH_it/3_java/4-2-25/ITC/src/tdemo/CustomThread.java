package tdemo;
class MyThread extends Thread
{
	@Override
	public void run()
	{
		super.run();
		System.out.println("rr  Child thread is Running.."+Thread.currentThread().getName());
	}

}
public class CustomThread
{
	public static void main(String[] args) throws InterruptedException
	{
		System.out.println("Main thread started....."+Thread.currentThread().getName());
		MyThread mt = new MyThread();
		mt.start();
		System.out.println("Main thread ended....."+Thread.currentThread().getName());
	}

}
