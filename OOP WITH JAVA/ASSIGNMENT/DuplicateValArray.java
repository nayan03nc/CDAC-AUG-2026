
public class DuplicateValArray {
	
	void duplicate(int arr[]) {
		int Dup=arr[0];
		for(int i=1;i<arr.length;i++) {
		if(arr[0]==arr[i]) {
			Dup=arr[i];
			}
		
		}
		System.out.println("Duplicate element is:"+Dup);
	}
	
public static void main(String[]args) {
	DuplicateValArray mn = new DuplicateValArray();
	System.out.println("Enter the size of array:");
	int size=ConsoleInput.getInt();
	int arr[] = new int [size];
	
	System.out.println("Enter the Element of array:");
	for(int i=0;i<arr.length;i++) {
		arr[i]=ConsoleInput.getInt();
	}
	
	mn.duplicate(arr);
}
}
