
public class Entry {
	public static void main(String[] args) {
		PrimeMembers pm = new PrimeMembers ();
		System.out.println("Enter the following details:");
		
		
		System.out.print("Enter Name: ");
		pm.setName(ConsoleInput.getString());
		
		System.out.print("Enter AGE: ");
		pm.setAge(ConsoleInput.getInt());
		
		System.out.print("Enter Mobile Number: ");
		pm.setphone(ConsoleInput.getLong());
		
		
		System.out.print("Enter Address: ");
		pm.setAddress(ConsoleInput.getString());
		
		System.out.print("Enter Salary: ");
		pm.setSalary(ConsoleInput.getInt());
		
		System.out.print("Enter Joining Year: ");
		pm.setJoiningYear(ConsoleInput.getInt());
		
		System.out.print("Enter Your Joining fees: ");
		pm.setJoiningFees(ConsoleInput.getDouble());
		
		System.out.print("IS ACTIVE(TRUE/FALSE): ");
		pm.setIsActive(ConsoleInput.getBoolean());
		
		pm.printSalary();
		pm.display();
		}
}

