package SportsTournamentManagementSystem;

public class TournamentClass  implements Tournament{

	String tournamentName;
	Team team1;
	Team team2;
	String matchResult;//  (Stores result of match)
	boolean matchCompleted; //  (True/False)


	public TournamentClass() {
		super();
	}

	public TournamentClass(String tournamentName, Team team1, Team team2, String matchResult, boolean matchCompleted) {
		super();
		this.tournamentName = tournamentName;
		this.team1 = team1;
		this.team2 = team2;
		this.matchResult = matchResult;
		this.matchCompleted = matchCompleted;
	}

	@Override
	public String viewTournamentDetails() {
		return toString();
	}

	@Override
	public void registerTeam(Team team) throws InvalidTeamNameException, TeamNotFoundException {
		if(team==null)
		{
			throw new TeamNotFoundException();
		}
		else if(team.teamName==null)
		{
			throw new InvalidTeamNameException();
		}
		else
		{
		   Team one=new Team(team.teamName, team.wins, team.losses, team.points);
		   System.out.println("registerTeam sucessfully");
		}

	}
	@Override
	public void recordMatchResult(Team team1, Team team2, String result)
			throws MatchAlreadyCompletedException, TeamNotFoundException {
		if(team1==null || team2==null)
		{
			throw new TeamNotFoundException();
		}
		else if(this.matchCompleted==true)
		{
			throw new MatchAlreadyCompletedException();
		}
		else if(result.equalsIgnoreCase("t1 win"))
		{
			team1.addWin(1);
		}
		else if(result.equalsIgnoreCase("t2 win"))
		{
			team1.addWin(1);
		}
		// TODO Auto-generated method stub

	}
	@Override
	public String viewStandings() {
		System.out.println(team1);
		System.out.println(team2);
		return null;
	}
	@Override
	public String toString() {
		return "TournamentClass [tournamentName=" + tournamentName + ", team1=" + team1 + ", team2=" + team2
				+ ", matchResult=" + matchResult + ", matchCompleted=" + matchCompleted + "]";
	}






}
