
public class SortedArray {
	
	public void sort(int arr[]) {
        int n = arr.length;
        int temp;
        
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
	
	
	
public static void main(String[]args) {
	SortedArray obj= new SortedArray();
	System.out.print("Enter the size Of array:");
	int size=ConsoleInput.getInt();
	int arr[]= new int[size];
	System.out.print("Enter the  element of array:");
	for(int i=0; i<arr.length;i++) {
		arr[i]=ConsoleInput.getInt();
	
		
	}
	obj.sort(arr);
	
	for(int i=0; i<arr.length;i++) {
		System.out.print(arr[i]+" ");
		
	}
	
}
}
