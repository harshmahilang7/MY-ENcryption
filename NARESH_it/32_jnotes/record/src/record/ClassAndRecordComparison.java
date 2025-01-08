package record;

public class ClassAndRecordComparison {

	public static void main(String[] args) 
	{
		ProductClass pc1 = new ProductClass(111, "Camra");
		System.out.println(pc1);
		ProductClass pc2 = new ProductClass(111, "Camra");
		System.out.println(pc1.equals(pc2));
		System.out.println(pc1.getProductName());
		
		System.out.println("..............");
		
        ProductRecord pr1 = new ProductRecord(999, "Java Book");
        System.out.println(pr1);
        ProductRecord pr2 = new ProductRecord(999, "Java Book");
        System.out.println(pr1.equals(pr2));
        System.out.println(pr1.productName());
        ProductRecord pr3 = new ProductRecord(128, "c++ Book");
        System.out.println(pr3);
        
		
	}

}