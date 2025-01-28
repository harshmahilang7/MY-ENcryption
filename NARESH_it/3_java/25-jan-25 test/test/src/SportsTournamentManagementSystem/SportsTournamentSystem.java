package SportsTournamentManagementSystem;
import java.util.Scanner;

public class SportsTournamentSystem {

	public static void main(String[] args) {

		Team t1=new Team("oneteam", 2, 6, 2);
		Team t2=new Team("twoteam", 4, 3, 1);
		Match m1=new Match(t1, t2, "oneteam win", true);

		Scanner sc=new Scanner(System.in);
		System.out.println("1.View Tournament Details");
		System.out.println("2 Register Team");
		System.out.println("3 Record Match Result");
		System.out.println("4 View Standings");
		System.out.println("5 Exit");
		int x=sc.nextInt();
		switch (x) {
		case 1:
			try {
				TournamentClass tc= new TournamentClass("main match", t1, t2, "t1 win", true);
				System.out.println(tc.viewTournamentDetails());

			} catch (Exception e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			break;
		case 2:

			try {
				TournamentClass tc= new TournamentClass();
				tc.registerTeam(t1);
			} catch (InvalidTeamNameException e) {

				e.printStackTrace();
			} catch (TeamNotFoundException e) {
				e.printStackTrace();
			}



			break;
		case 3:
			try {
				TournamentClass tc= new TournamentClass("main match", t1, t2, "t1 win", true);
				tc.recordMatchResult(t1, t2, "t1 win");
			} catch (MatchAlreadyCompletedException | TeamNotFoundException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			break;
		case 4:
			try {
				System.out.println(m1.getMatchDetails());
			} catch (Exception e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			break;
		case 5:
		{

		}
			break;

		default:
			break;
		}

	}

}
