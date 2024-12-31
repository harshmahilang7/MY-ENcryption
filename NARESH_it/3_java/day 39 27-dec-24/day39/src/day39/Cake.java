package day39;

public abstract class Cake {
	private String shapeType;
	private String flavourType;
	private int qtyType;
	private float priceType;
	
	protected Cake(String shapeType, String flavourType, int qtyType) {
		super();
		this.shapeType = shapeType;
		this.flavourType = flavourType;
		this.qtyType = qtyType;
		priceType=400*qtyType;
		
	}

	protected String getShapeType() {
		return shapeType;
	}

	protected void setShapeType(String shapeType) {
		this.shapeType = shapeType;
	}

	protected String getFlavourType() {
		return flavourType;
	}

	protected void setFlavourType(String flavourType) {
		this.flavourType = flavourType;
	}

	protected int getQtyType() {
		return qtyType;
	}

	protected void setQtyType(int qtyType) {
		this.qtyType = qtyType;
	}

	protected float getPriceType() {
		return priceType;
	}

	protected void setPriceType(float priceType) {
		this.priceType = priceType;
	}
	
	
	
//	Name of the method : showCake
//	Return Type : void
//	Modifier : protected.
//	Task : It must print data as per below format/example.
//	"A Round Vanilla Cake Of 2 Kg/Kg's Ready @ Rs.800/-"
	
	
	protected void showCake()
	{
		System.out.println("A "+shapeType+" "+flavourType+" Cake Of "+qtyType+" Kg/Kg's Ready @ Rs."+priceType+"/-");
	}
	
	
	
	
	

}
