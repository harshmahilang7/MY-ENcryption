/*
Program 01:
-----------
Write a Program on OOPs to define Product class properties and behaviour.

properties :
productId : int
productName : String
productPrice : double

Initialize these properties with the help of Methods using Scanner class not by using Object reference.

behavior:
setProductData() : public void
getProductInfo() : public void
*/
//import java.util.Scanner;
public class ElcProgramOne 
{
	public static void main(String[] args) 
	{
		BlcProgramOne obj1=new BlcProgramOne();
		
		/*
		obj1.productId=101     -> by using Object reference.
		 
		*/
		
		obj1.setProductData();
		obj1.getProductInfo();
	}
}
