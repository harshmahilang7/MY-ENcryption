class P3BookELC 
{
	public static void main(String[] args) 
	{
		P3Book myBook=new P3Book("title","harsh","12312",100,10);
		System.out.println("Title: " + myBook.getTitle());
        System.out.println("Author: " + myBook.getAuthor());
        System.out.println("ISBN: " + myBook.getISBN());
        System.out.println("Price: $" + myBook.getPrice());
        System.out.println("Discount Percentage: " + myBook.getDiscountPercentage() + "%");
		myBook.getFinalPrice();
		System.out.println("Title: " + myBook.getTitle());
        System.out.println("Author: " + myBook.getAuthor());
        System.out.println("ISBN: " + myBook.getISBN());
        System.out.println("Price: $" + myBook.getPrice());
        System.out.println("Discount Percentage: " + myBook.getDiscountPercentage() + "%");
		
	}
}
