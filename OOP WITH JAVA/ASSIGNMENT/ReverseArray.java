
public class ReverseArray {
	
	void reverseArr(int arr[]) {
		System.out.print("Reverse array is:");
		for(int i=arr.length-1;i>=0;i--) {
			System.out.print(arr[i]+" ");
		}
	}
public static void main(String[]args) {
	ReverseArray rvs = new ReverseArray();
	System.out.println("Enter the size of Array:");
	int size=ConsoleInput.getInt();
	
	int arr[]= new int[size];
	System.out.println("Enter the Element of Array:");
	for(int i=0;i<arr.length;i++) {
		arr[i]=ConsoleInput.getInt();
	}
	  rvs.reverseArr(arr); 
}
 
}
