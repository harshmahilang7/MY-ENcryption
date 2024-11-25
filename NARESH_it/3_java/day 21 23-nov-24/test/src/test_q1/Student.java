package test_q1;

public class Student {
	String name;
    int rollNumber;
    Batch batch;
    Student(String name,int rollNumber,Batch batch)
    {
        this.name=name;
        this.rollNumber=rollNumber;
        this.batch=batch;
    }
    void assignBatch(Batch batch)
    {
        this.batch=batch;
    }
    void shiftBatch(Batch newBatch)
    {
        this.batch=newBatch;
    }

    void displayDetails()
    {
        System.out.println("name  : "+name);
        System.out.println("rollNumber  : "+rollNumber);
        batch.displayDetails();
    }
}
