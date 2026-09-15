
public class SumOfArray {
	float sum=0;
	
	void add(int arr[]) {
		
		
		for(int i=0;i<arr.length;i++) {
			sum=sum+arr[i];
		}
		System.out.println("sum of Array element is:"+sum);
		float avg=(sum/arr.length);
		System.out.println("avg of Array element is:"+avg);
	}
	
	
public static void main(String[]args) {
	SumOfArray obj = new SumOfArray();
	System.out.print("Enter the size of  array :");
	int size=ConsoleInput.getInt();
	int arr[] = new int[size];
	System.out.println("Enter the array Element:");
	for(int i=0;i<arr.length;i++) {
		arr[i]=ConsoleInput.getInt();
	}
	
	obj.add(arr);
}
}
