public class exception {

    public static void main (String[] args) 
    {
        int i=4;
        try
        {
            int k=i/0;
            System.out.println("i will run if try block dont have error"+k);
            
        }
        catch(ArithmeticException ex)
        {
            System.out.println("if try block have error then i will run"+ex);
        }
         
        finally
        {
        System.out.println("i will always here");
        }
    }

}

