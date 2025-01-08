package test;

interface a {
	default void m1() {
		System.out.println("hello a");
	}
}

interface b {
	default void m1() {
		System.out.println("hello b");
	}
}

public class demo1 implements a, b {
	public static void main(String[] args) {
		a obj1 = new demo1();
//		b.m1();

	}

	@Override
	public void m1() {
		// TODO Auto-generated method stub
		a.super.m1();
		b.super.m1();
	}
}
