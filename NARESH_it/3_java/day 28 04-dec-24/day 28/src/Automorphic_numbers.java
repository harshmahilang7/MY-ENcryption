
public class Automorphic_numbers {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
//		Automorphic numbers

		//Automorphic numbers. // 5*5=25 // last digit is 5 // 6*6=36 // last digit is 6  // 25*25=625 // last digit is 25
		int num=25;
		int sq=num*num;
		int c=sq;
		int d=0;
		while(c!=0)
		{
			d++;
			c/=10;
		}


		if(num==sq%power(10,d))
		{
			System.out.println("yes");
		}

	}

	private static int power(int n, int d) {
		int sum=1;
		for(int i=1;i<=d;i++)
		{
			sum*=n;
		}
		return sum;
	}


}
