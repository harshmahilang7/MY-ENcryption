package interface_cant_extend_class;

@FunctionalInterface
interface Drawable
{
	void draw();
	public String toString();
	public int hashCode();
	public boolean equals(Object obj);	
}

class DrawableDemo implements Drawable
{

	@Override
	public void draw() {
		// TODO Auto-generated method stub
		
	}
   	
}
public class InterfaceMemberDemo2 
{
	public static void main(String[] args) 
	{
		
		Drawable d1=new DrawableDemo();
		d1.toString();
		d1.hashCode();
		
	}

}