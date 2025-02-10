package day;


import java.util.Arrays;
//import java.util.Comparator;

public class StudentComparable {

	public static void main(String[] args) {
		Student s[]=new Student[4];
		s[0]=new Student(4, "harsh", 2000);
		s[1]=new Student(3, "vijay", 1000);
		s[2]=new Student(2, "ashrsh", 4000);
		s[3]=new Student(1, "avhinash", 6000);


//		Arrays.sort(s, new Comparator<Student>() {
//		    @Override
//		    public int compare(Student s1, Student s2) {
//		        return Integer.compare(s1.id(), s2.id());
//		    }
//		});

		Arrays.sort(s, (s1,s2) -> Integer.compare(s1.id(), s2.id()) );

		System.out.println("\nSorted Students (by ID):");
        for (Student student : s) {
        	  System.out.println(student);
        }


	}

}
