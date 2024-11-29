package q3;

public class MainTicket {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
	     Ticket regularTicket = new Ticket("Concert", 101, 50.0);
	     System.out.println(regularTicket);
         VIPTicket vipTicket = new VIPTicket("VIP Concert", 201, 100.0, "Backstage Access");
         System.out.println(vipTicket);
         StudentTicket studentTicket = new StudentTicket("Student Event", 301, 30.0, true);
         System.out.println(studentTicket);


	}

}
