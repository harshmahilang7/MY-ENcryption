package sbeans;

public class Book {
	String title ;
	String isbn ; 
	int pageCount;
	
	
	public Book(String title, String isbn, int pageCount) {
		super();
		this.title = title;
		this.isbn = isbn;
		this.pageCount = pageCount;
	}


	@Override
	public String toString() {
		return "Book [title=" + title + ", isbn=" + isbn + ", pageCount=" + pageCount + "]";
	}
	
	
	

}
