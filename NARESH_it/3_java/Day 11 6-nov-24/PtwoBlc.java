
class PtwoBlc 
{
	double result=0;
	public void add(double num)
	{
		result+=num;
	}
	public void subtract(double num)
	{
		result-=num;
	}
	public void multiply(double num)
	{
		if(result==0)
		{
			result=1;
		}
		result*=num;
	}
	public void division(double num)
	{
		
		if(num==0)
		{
			System.out.println("number is 0 not possible");
		}
		else 
		{
		//	if(result>=0&&result<=9)
		//{
		//	result=1;
		//}
			result/=num;
		}
	}
	public double getResult()
	{
		return result;
	}
	


	
}
