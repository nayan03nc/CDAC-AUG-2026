
public class Rectangle {
	int length;
	int breath;
	Rectangle(int a , int b){
		this.length=a;
		this.breath=b;
	}
	public int area() {
		return  length * breath;
		
	}
public static void main(String []args) {
	Rectangle rec = new Rectangle(4,5);
	Rectangle rec1 = new Rectangle(5,8);
	System.out.println("Area of first Rectangle:"+rec.area());
	System.out.println("Area of second Rectangle:"+rec1.area());
}
}
