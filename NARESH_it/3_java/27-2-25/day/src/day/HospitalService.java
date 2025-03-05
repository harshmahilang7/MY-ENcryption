package day;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class HospitalService {
	static int id=100;
	private static int idGenrated()
	{
		return id++;
	}

	ArrayList<Hospital> hospital=new ArrayList<Hospital>();
	HashMap<Integer, String> hosIdPass= new HashMap<Integer, String>();

	public Hospital addHospital(String hospitalName, String contactPerson, String contactNumber, String location,List<String> listOfTreatments)
	{
		int id=idGenrated();
		hosIdPass.put(id, hospitalName);
		Hospital h= new Hospital(id, hospitalName, contactPerson, contactPerson, location, listOfTreatments);
		hospital.add(h);
		return h;
	}

   public Map<Integer,String> getHospitals()
    {
		return hosIdPass;
    }

   public Hospital getHospitalDetails(int id)
   {

	  for (int i = 0; i < this.hospital.size(); i++)
	  {
		  if(hospital.get(i).hospitalCode==id)
		  {

			  return hospital.get(i);
		  }
	  }
	return null;

	}

   }



