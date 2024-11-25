package test_q1;

public class Batch
{
    String batchName;
    String timing;
    String department;
    Batch(String batchName,String timing,String department)
    {
        this.batchName=batchName;
        this.timing=timing;
        this.department=department;
    }

    void displayDetails()
    {
        System.out.println("batchName  : "+batchName);
        System.out.println("timing  : "+timing);
        System.out.println("department  : "+department);
    }   


}
