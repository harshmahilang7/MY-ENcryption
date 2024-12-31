package day39;

public class OrderedCake extends Cake {
	private String message;

	protected OrderedCake() {
		super("Round", "Vanilla", 1);
	}

	protected OrderedCake(String shapeType, String flavourType, int qtyType) {
		super(shapeType, flavourType, qtyType);
	}

	protected OrderedCake(String shapeType, String flavourType, int qtyType, String message) {
		super(shapeType, flavourType, qtyType);
		this.message = message;
	}
//
//	@Override
//	protected void showCake()
//	{
//(this.message==null) ? System.out.println("hwllo");:System.out.println("A "+getShapeType()+" "+getFlavourType()+" Cake Of "+getQtyType()+" Kg/Kg's Ready with message"+message+" @ Rs."+getPriceType()+"/-");
//	}

	@Override
	protected void showCake() 
	{
		if (message == null) 
		{
			super.showCake();
		} 
		else 
		{
			System.out.println("A " + getShapeType() + " " + getFlavourType() + " Cake Of " + getQtyType()
					+ " Kg/Kg's Ready with message " + message + " @ Rs." + getPriceType() + "/-");
		}

	}

}
