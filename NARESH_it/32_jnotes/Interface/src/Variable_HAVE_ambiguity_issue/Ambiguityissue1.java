package Variable_HAVE_ambiguity_issue;

interface one {
	int x = 100;

	default void m1() {
		System.out.println("one");
	}
}

interface two {
	int x = 100;

	default void m1() {
		System.out.println("two");
	}
}

class subclass implements one, two {
//   int x = 300;               //Variable Hiding to solve ambiguity issue
	public void show() {
		// System.out.println(one.super.x); // The field x is ambiguous
		// System.out.println(x); // The field x is ambiguous

	}

	@Override
	public void m1() {
		one.super.m1();
		two.super.m1();

	}
}

public class Ambiguityissue1 {
	public static void main(String[] args) {
		new subclass().show();
		new subclass().m1();

	}

}
