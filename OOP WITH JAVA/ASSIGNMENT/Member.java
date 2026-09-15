
public class Member {
	private String name;
	private int age ;
	private long phoneNO;
	private String address;
	private double salary;
	
	public void setName(String Name) {this.name=Name;}
	public void setAge(int Age) {this.age=Age;}
	public void setphone( long Phone) {this.phoneNO=Phone;}
	public void setAddress( String Address) {this.address=Address;}
	public void setSalary(double Salary) {this.salary=Salary;}
	
	public String getName() {return name;}
	public int getAge() {return age;}
	public long getphone() {return phoneNO;}
	public String getAddress() {return address;}
	public double getSalary() {return salary;}
		
	public void printSalary() {
    System.out.println("Salary: " + salary);
	}
		
}
