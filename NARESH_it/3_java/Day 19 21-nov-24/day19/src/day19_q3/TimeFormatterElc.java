package day19_q3;

public class TimeFormatterElc {
public static void main(String[] args) {

	TimeFormatter t1=new TimeFormatter(2,30,40);
	TimeFormatter t2=new TimeFormatter(4,40,21);
	TimeFormatter obj1=TimeFormatter.add(t1, t2);
	System.out.println(obj1);
	
}
}
