package om.nit.main;

import org.springframework.context.support.ClassPathXmlApplicationContext;

public class test 
{
	public static void main(String[] args)
	{
		ClassPathXmlApplicationContext ctx= new ClassPathXmlApplicationContext("com/nit/config/Applicationcontext.xml");

		ParserFactory bean = ctx.getBean("documentParser",ParserFactory.class);
		int h1 = bean.hashCode();
		ParserFactory bean2 = ctx.getBean("documentParser",ParserFactory.class);
		int h2 = bean2.hashCode();
		System.out.println(h1+"  "+h2);
	}

}
