public class Triangle {
    int a, b, c;

    public Triangle(int side1, int side2, int side3) {
        this.a = side1;
        this.b = side2;
        this.c = side3;
    }

    public void display() {
        int perimeter = a + b + c;
        double s = perimeter / 2.0;
        double area = Math.sqrt(s * (s - a) * (s - b) * (s - c));

        System.out.println("Perimeter: " + perimeter);
        System.out.println("Area: " + area);
    }

    public static void main(String[] args) {
        Triangle t = new Triangle(3, 4, 5);
        t.display();
    }
}