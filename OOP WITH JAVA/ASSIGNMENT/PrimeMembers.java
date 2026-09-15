
public class PrimeMembers extends Member {
private int JoiningYear;
private double JoiningFees;
private boolean isActive;

public void setJoiningYear(int joining) {this.JoiningYear=joining;}
public void setJoiningFees(double joiningfee) {this.JoiningFees=joiningfee;}
public void setIsActive(boolean Isactive) {this.isActive=Isactive;}

public int getJoiningYear() {return JoiningYear;}
public double getJoiningFees() {return JoiningFees;}
public boolean getIsActive() {return isActive;}

public void display() {
	System.out.println("=========Prime Member details============");
	System.out.println("Name: "+getName());
	System.out.println("Age: "+getAge());
	System.out.println("Mobile: "+getphone());
	System.out.println("Address: "+getAddress());
	System.out.println("Salary: "+getSalary() );
	System.out.println("Year of Joining: "+getJoiningYear());
	System.out.println("Joining Fees: "+getJoiningFees());
	System.out.println("IsActive: "+getIsActive());
}
}
