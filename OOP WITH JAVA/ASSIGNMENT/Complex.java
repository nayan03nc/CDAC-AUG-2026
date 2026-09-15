import java.util.Scanner;
public class Complex {
	
	int real;
	int imag;
	
	Complex(int a , int b){
		this.real=a;
		this.imag=b;
		System.out.println("You enter complex number is :"+real+"+"+imag+"i");
	}
	void add(int r , int i) {
		int Real= this.real+=r;
		int Imag = this.imag+=i;
		
		System.out.println("additon of complex No is:"+Real+"+"+Imag+"i");
	}
	
	void sub(int r, int i) {
		int Real= this.real-=r;
		int Imag = this.imag-=i;
		
		System.out.println("Substraction of complex No is:"+Real+"+"+Imag+"i");
	}
	
	void product(int r, int i) {
		int Real= this.real*=r;
		int Imag = this.imag*=i;
		
		System.out.println("Product of complex No is:"+Real+"+"+Imag+"i");
	}
	
public static void main(String []ars) {
	Scanner sc = new Scanner(System.in);
	System.out.println("Enter fist number:");
	int first=sc.nextInt();
	System.out.println("Enter second number:");
	int second=sc.nextInt();
	Complex c = new Complex(first,second);
	
	System.out.println("____Now for Addition___");
	System.out.println("Enter the first No:");
	int f=sc.nextInt();
	System.out.println("Enter the second No:");
	int s=sc.nextInt();
	c.add(f, s);
	
	System.out.println("____Now for Substraction___");
	System.out.println("Enter the first No:");
	int F=sc.nextInt();
	System.out.println("Enter the second No:");
	int S=sc.nextInt();
	c.sub(F,S);  
	
	System.out.println("____Now for Multiplication___");
	System.out.println("Enter the first No:");
	int frt=sc.nextInt();
	System.out.println("Enter the second No:");
	int sec=sc.nextInt();
	
	c.product(frt,sec);
}
}
