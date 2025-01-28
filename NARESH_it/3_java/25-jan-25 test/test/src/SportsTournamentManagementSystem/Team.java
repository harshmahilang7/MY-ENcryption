package SportsTournamentManagementSystem;

public class Team {
	String teamName;
	 int wins;// (Number of wins)
	 int losses;//(Number of losses)
	 int points;//(Points earned)


	public Team(String teamName, int wins, int losses, int points) {
		super();
		this.teamName = teamName;
		this.wins = wins;
		this.losses = losses;
		this.points = points;
	}


	public String getTeamName() {
		return teamName;
	}


	public void setTeamName(String teamName) {
		this.teamName = teamName;
	}


	public int getWins() {
		return wins;
	}


	public void addWin(int wins) {
		this.wins = wins;
	}


	public int getLosses() {
		return losses;
	}


	public void addLosses(int losses) {
		this.losses = losses;
	}


	public int getPoints() {
		return points;
	}


	public void setPoints(int points) {
		this.points = points;
	}


	@Override
	public String toString() {
		return "Team [teamName=" + teamName + ", wins=" + wins + ", losses=" + losses + ", points=" + points + "]";
	}





}
