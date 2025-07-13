package q2;

public class Department {

	//SQL> create table departments(id number(10), name varchar2(20),location varchar2(20),manager_id number(10));

	//Table created.
	Long id;
	String name;
	String loc;
	Long manager_id;


	public Long getId() {
		return id;
	}
	public String getName() {
		return name;
	}
	public String getLoc() {
		return loc;
	}
	public Long getManager_id() {
		return manager_id;
	}
	@Override
	public String toString() {
		return "Department [id=" + id + ", name=" + name + ", loc=" + loc + ", manager_id=" + manager_id + "]";
	}
	public Department(Long id, String name, String loc, Long manager_id) {
		super();
		this.id = id;
		this.name = name;
		this.loc = loc;
		this.manager_id = manager_id;
	}




}
