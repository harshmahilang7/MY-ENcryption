package own_functional_interface_with_Type_parameter;

@FunctionalInterface
interface TriFunction<T,U,V,R>
{
    public abstract R apply(T a, U b, V c);	
}

public class own_functional_interface_with_Type_parameter 
{
	
	public static void main(String[] args) 
	{
			TriFunction<Integer, Integer, Integer, String> tn = (x,y,z)  ->  ""+ x + y + z;
			
			System.out.println(tn.apply(100, 200, 300));
					
	}
}

