package test_q1;

public class BatchManager {
	public static Batch createBatch(String batchName, String timing, String department)
    {
        return new Batch(batchName,timing,department);
    }

}
