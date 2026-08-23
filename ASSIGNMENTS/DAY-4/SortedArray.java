import java.util.Scanner;
import java.util.Arrays;
class SortedArray
{
public static void main (String args[])
{

int a[]= new int[5];

Scanner sc = new Scanner(System.in);
System.out.print("Enter 5 integers:");

for(int i=0 ; i<5; i++){
a[i] = sc.nextInt();
}

Arrays.sort(a);
for(int i=0; i <5;i++){
System.out.print(" "+a[i]);
}
}

}