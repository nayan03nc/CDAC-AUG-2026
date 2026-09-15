
public class child extends Parent {
void childMethod() {
	System.out.println("This is child class");
}
public static void main(String[]args) {
	Parent p = new Parent();
	p.parent();
	child c = new child();
	c.childMethod();
	 
	c.parent();
}
}
