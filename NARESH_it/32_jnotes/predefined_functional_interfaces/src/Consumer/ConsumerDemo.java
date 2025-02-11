package Consumer;

import java.util.function.Consumer;

public class ConsumerDemo {
	public static void main(String[] args) {
		Consumer<Integer> obj1=x->
		{
			System.out.println("the value of x is : "+x);
		};
		
		obj1.accept(1);
	}

}
