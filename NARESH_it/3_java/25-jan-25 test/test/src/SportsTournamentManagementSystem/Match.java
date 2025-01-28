package SportsTournamentManagementSystem;

public class Match {
	Team team1;
	Team team2;
	String  result; // (Result of the match)
	boolean matchCompleted; //  (True/False)
	public Match(Team team1, Team team2, String result, boolean matchCompleted) {
		super();
		this.team1 = team1;
		this.team2 = team2;
		this.result = result;
		this.matchCompleted = matchCompleted;
	}

	void recordResult(String result)
	{
		this.result = result;
		matchCompleted=true;
	}



	public String getMatchDetails() {
		return "Match [team1=" + team1 + ", team2=" + team2 + ", result=" + result + ", matchCompleted="
				+ matchCompleted + "]";
	}







}
