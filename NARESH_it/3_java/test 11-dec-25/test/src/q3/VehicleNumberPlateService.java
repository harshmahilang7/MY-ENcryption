package q3;

import java.util.function.BiFunction;
import java.util.function.Supplier;

public class VehicleNumberPlateService implements StateCodeValidator ,StateInputHandler ,NumberPlateGenerator
{
	@Override
	public boolean isValid(String StateCode) {
		if(getStateCodeInput().length()==2)
		{
			return true;
		}
		return false;
	}
	
	public static void main(String[] args) 
	{
		
		
		Supplier<Integer> four= () ->
		{
			int x=(int) (Math.random()*4000);
			return x;
		
		};
		
		BiFunction<String,String,String> CN=(c,n)->
		{
			return c+n;
		};
		NumberPlateGenerator obj1=new VehicleNumberPlateService();
		System.out.println(obj1.generateNumberPlate("MP", four, CN));
		
		
	}

	
	
	
	

	
}
