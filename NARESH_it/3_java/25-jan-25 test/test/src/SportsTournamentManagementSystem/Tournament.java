package SportsTournamentManagementSystem;

public interface Tournament {

	String viewTournamentDetails();

	void registerTeam(Team team)throws InvalidTeamNameException, TeamNotFoundException;

	void recordMatchResult(Team team1, Team team2, String result) throws MatchAlreadyCompletedException, TeamNotFoundException;

	String viewStandings();

}
