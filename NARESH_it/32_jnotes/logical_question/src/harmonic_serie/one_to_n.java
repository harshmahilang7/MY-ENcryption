package harmonic_serie;

//1 1/2 1/3 1/4 1/5 1/6 1/7 1/8 1/9 1/10 1/11 1/12 1/13 1/14 .......
public class one_to_n {
	public static void main(String[] args) 
	{
		int last=100;
		int s=1;
		System.out.print(s+" ");
		for(int i=2;i<=last;i++)
		{
			System.out.print("1/"+i+" ");
		}
		
		
	}

}
