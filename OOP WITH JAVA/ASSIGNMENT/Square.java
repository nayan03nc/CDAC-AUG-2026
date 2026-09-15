
public class Square extends Rectangle{
	float side;
	
	Square(float s){
		side=s;
		
		}
	Square(float l, float b) {
	    super(l, b); // Rectangle ke constructor ko call kar diya
	}
	
	float areaOfSqr() {
		return side * side;
	}
	
	float perimeterOfSqr(){
		return 4*side;
	}
		
public static void main(String[]args) {
	System.out.print("Enter side for Square:");
	Square sq= new Square(ConsoleInput.getFloat());
	
	System.out.println("Area of Square:"+sq.areaOfSqr());
	System.out.println("perimeter of Square:"+sq.perimeterOfSqr());
	System.out.println();
	System.out.print("Enter length and Breath of Rectangle:");
	//Rectangle rec = new Rectangle(ConsoleInput.getFloat(),ConsoleInput.getFloat());
	
	Square sq1= new Square(ConsoleInput.getFloat(),ConsoleInput.getFloat());
	System.out.println("Area of Rectangle:"+sq1.areaOfRectangel()+"cm");
	System.out.println("perimeter of Rectangle:"+sq1.perimeterOfRectangle()+"cm");
	

	
	
	}	
}
