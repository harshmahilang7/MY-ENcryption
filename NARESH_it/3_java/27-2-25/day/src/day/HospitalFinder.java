package day;

import java.util.Arrays;
import java.util.List;
import java.util.Map;

public class HospitalFinder {

	public static void main(String[] args)
	{
		List<String> ser = Arrays.asList("Cardiac", "ENT", "Ortho", "Pediatric"," Gastro");
		HospitalService hs= new HospitalService();
		hs.addHospital("YASHODA", "MATHES", "9848222222", "sec", ser);
		hs.addHospital("prime", "MATHES", "9848222222", "sec", ser);

		System.out.println(hs.getHospitals());



		System.out.println(hs.getHospitalDetails(102));



	}

}
