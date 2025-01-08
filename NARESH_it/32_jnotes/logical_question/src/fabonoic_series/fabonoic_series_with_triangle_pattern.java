package fabonoic_series;

public class fabonoic_series_with_triangle_pattern {

	public static void main(String[] args) {
		int num1=0;
	    int num2=1;
	    System.out.println(num1);
	    for(int i=0;i<=5;i++)
	    {
	        System.out.print(num1);
	        System.out.print(num2);
	        for(int j=1;j<=i;j++)
	        {
	            int d=num1+num2;
	            num1=num2;
	            num2=d;
	            System.out.print(d);
	        }
	        num1=0;
	        num2=1;
	        System.out.println();
	    }

	}

}
