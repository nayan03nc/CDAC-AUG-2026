

public class Employee {
	String name;
	int yearOfjoining;
	String Address;
	
	Employee(String Name, int yoj , String address){
		this.name=Name;
		this.yearOfjoining=yoj;
		this.Address=address;
	}
	
	void display() {
		
		System.out.println(""+name+"         "+yearOfjoining+"         "+Address);
	}
public static void main(String[]args) {

	System.out.println("Name  "+"   Year of Joining        "+"     Address");
	Employee e = new Employee("Robert",  1994,"    64C- WallsStreat");
	Employee e2 = new Employee("Sam   ",  2000,"    68D- WallsStreat");
	Employee e3 = new Employee("John  ",  1999,"    26B- WallsStreat");
    e.display();
	e2.display();
	e3.display();
		
		
	}
}

