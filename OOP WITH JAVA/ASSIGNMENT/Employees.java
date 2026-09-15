class Employees {
    int salary;
    int hours;

   
    void getInfo(int sal, int hr) {
        salary = sal;
        hours = hr;
    }

    
    void addSal() {
        if (salary < 500) {
            salary += 10;
        }
    }

   
    void addWork() {
        if (hours > 6) {
            salary += 5;
        }
    }

    public static void main(String[] args) {
        Employees e = new Employees();

     
        e.getInfo(450, 7);

        
        e.addSal();
        e.addWork();

        
        System.out.println("Final Salary: $" + e.salary);
    }
}