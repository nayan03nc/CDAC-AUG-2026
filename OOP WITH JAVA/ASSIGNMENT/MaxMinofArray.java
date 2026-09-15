
public class MaxMinofArray {
	
	void min (int arr[]){
		int MIN=arr[0];
		for(int i=0;i<arr.length;i++) {
		if(arr[i]<MIN) {
			MIN=arr[i];
			
		}
	}
		System.out.println("Minimum is:"+MIN);
	}
	
	void max(int arr[]){
		int MAX=arr[0];
		for(int i=0;i<arr.length;i++) {
		if(arr[i]>MAX) {
			MAX=arr[i];
			
		}
	}
		System.out.println("Maximum is:"+MAX);
	}
public static void main(String[]args) {
	MaxMinofArray mn = new MaxMinofArray();
	System.out.println("Enter the size of array:");
	int size=ConsoleInput.getInt();
	int arr[] = new int [size];
	
	System.out.println("Enter the Element of array:");
	for(int i=0;i<arr.length;i++) {
		arr[i]=ConsoleInput.getInt();
	}
	
	mn.min(arr);
	mn.max(arr);
	
	
}
}
