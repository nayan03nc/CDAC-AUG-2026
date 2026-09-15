
public class student {
String name;
int roll_no;
String phone_no;
String Address;
public static void main(String[]args) {
	student sd = new student ();
	sd.name="John";
	sd.roll_no=2;
	
	System.out.println("1)Name:" +sd.name+ " , " +"Roll no:"+sd.roll_no);
	
	student sd1= new student();
	sd1.name="sam";
	sd1.roll_no=1;
	sd1.phone_no="1234567890";
	sd1.Address="america";
	
	
	student sd2= new student();
	sd2.name="John";
	sd2.roll_no=3;
	sd2.phone_no="0987654321";
	sd2.Address="france";
	
	System.out.println("2)Name:" +sd1.name+" Roll_No:"+sd1.roll_no+" Phone_NO:"+sd1.phone_no+" Address:"+sd1.Address);
	System.out.println("3)Name:" +sd2.name+" Roll_No:"+sd2.roll_no+" Phone_NO:"+sd2.phone_no+" Address:"+sd2.Address);
}
}
