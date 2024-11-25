package day22setAq3;

public class PlacementManager {

	public static JobProfile createJobProfile(String companyName, String role, double salary, String location,String placementCell)
	{
		return new JobProfile(companyName,role,salary,location,placementCell);
	}
}
