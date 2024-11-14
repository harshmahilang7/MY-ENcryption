class ProductElc 
{
	public static void main(String[] args) 
	{
		ProductBlc obj1=new ProductBlc();
		obj1.display_info();
		
		ProductBlc obj2=new ProductBlc(null,-9,-6);
		obj2.display_info();
		
		ProductBlc obj3=new ProductBlc("apple",21,200);
		obj3.display_info();
		
	}
}
