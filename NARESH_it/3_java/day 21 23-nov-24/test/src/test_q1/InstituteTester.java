package test_q1;

//private class BatchManager
//{
//    public static Batch createBatch(String batchName, String timing)
//    {
//        return new Batch(batchName,timing);
//    }
//}


public class InstituteTester
{
    public static void main(String[] args)
    {
        Batch obj1=BatchManager.createBatch("Morning Batch","8 AM - 12 PM","Computer Science");
        obj1.displayDetails();
        Student s1= new Student("John Doe",101,obj1);
        s1.displayDetails();
    }

}