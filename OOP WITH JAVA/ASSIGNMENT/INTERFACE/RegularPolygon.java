
public interface RegularPolygon {
	int getNumSides();
	double getSideLength();
	
	default double getPerimeter () {
		return getNumSides() * getSideLength();
	}
	
	default double getInteriorAngle () {
		return ((getNumSides()-2)* Math.PI) / getNumSides();
	}
	
	 static int totalSides(RegularPolygon[] polygons) {
	        int sum = 0;
	        for (RegularPolygon p : polygons) {
	            sum += p.getNumSides();
	        }
	        return sum;
	    }
}

class EquilateralTriangle implements RegularPolygon{
	double sideLength;
	EquilateralTriangle (double sideLength){
		this.sideLength= sideLength;
	}
	
	public int getNumSides() {
		return 3;
	}
	
	public double getSideLength() {
		return sideLength;
	}
	
}

class Square implements RegularPolygon{
	
	double sideLength;
	
	Square (double sideLength){
		this.sideLength= sideLength;
	}
	
	public int getNumSides(){
		return 4;
	}
	

	public double getSideLength() {
		return sideLength;
	}
}

class PolygoneTest{
	
	public static void main(String[]args) {
		RegularPolygon triangle = new EquilateralTriangle(10);
		RegularPolygon square  = new Square(5);
		
		System.out.println("for EquilateralTriangle perimeter:"+triangle.getPerimeter());
		System.out.println("for EquilateralTriangle angle:"+triangle.getInteriorAngle());
		

		System.out.println("for square perimeter:"+square.getPerimeter());
		System.out.println("for Square angle:"+square.getInteriorAngle());
		
		RegularPolygon[] polygons= {triangle,square};
		System.out.println(""+RegularPolygon.totalSides(polygons));
	}
}