package mcqs;

import java.util.ArrayList;

public class q4 {
		public static void main(String[] args) {
			ArrayList<String> al = new ArrayList<>();
			al.add("25");
			al.add("Naresh");
			al.add("A");
			al.add("37");
			al.add("37");
			al.remove(4);
			for(String str: al)
				System.out.print(str+" ");
		}
	}
