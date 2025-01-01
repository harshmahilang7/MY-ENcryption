package static_method;

public interface Calculate 
{
  static double getCube(int num)
  {
	  return (num*num*num);
  }
  
  static double getSquare(int num)
  {
	  return (num*num);
  }
  
}