package q3;

import java.util.function.BiFunction;
import java.util.function.Supplier;

public interface NumberPlateGenerator {
	
	default String generateNumberPlate(String stateCode, Supplier<Integer> randomNumber, BiFunction<String, String, String> plateCombiner) 
	{

		String n=randomNumber.get()+" ";
		return plateCombiner.apply(stateCode, n);
		
	}

}
