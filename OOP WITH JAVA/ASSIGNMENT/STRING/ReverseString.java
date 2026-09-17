
public class ReverseString {
public static void main (String[]args) {
	String str= "The quick brown fox jumps";
	char[] Sarr= str.toCharArray();
	
	for(int i=Sarr.length-1;i>=0;i--) {
		System.out.print(Sarr[i]);
		
	}
}
}
