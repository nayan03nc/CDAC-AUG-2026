import java.util.Scanner;
import java.util.Arrays;
class SearchByArraysBinarySearch
{
public static void main (String args[])
{

int a[]= new int[5];

Scanner sc = new Scanner(System.in);
System.out.print("Enter 5 integers:");

for(int i=0 ; i<5; i++){
a[i] = sc.nextInt();
}

Scanner s = new Scanner(System.in);
System.out.print("Enter Number to Search:");
int num =s.nextInt();

Arrays.sort(a);
int index = Arrays.binarySearch(a,num);

if(index>=0){
System.out.print("the number "+num+" found at index "+index); 
}
else{
System.out.print("not found");
}

}

}