package testq1;

public class FactoryClass {
	 public static Language factory(String lang)
	 {
		 if(lang.equalsIgnoreCase("hindi"))
		 {
			 Language l1=new Hindi();
			 return l1;
		 }
		 else if(lang.equalsIgnoreCase("telugu"))
		 {
			 Language l1=new Telugu();
			 return l1;
		 }
		 else
		 {
			 Language l1=new Non();
			 return l1;
		 }
	 }

}
