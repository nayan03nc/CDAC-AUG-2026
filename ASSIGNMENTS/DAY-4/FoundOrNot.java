import java.util.Scanner;
import java.util.Arrays;
class FoundOrNot
{
public static void main (String args[])
{

Integer a[]= new Integer[5];

Scanner sc = new Scanner(System.in);
System.out.print("Enter 5 integers:");

for(int i=0 ; i<5; i++){
a[i] = sc.nextInt();
}

Scanner s = new Scanner(System.in);
System.out.print("Enter Number to Search:");
int num =s.nextInt();


boolean found= Arrays.asList(a).contains(num);

if(found){
System.out.print("found");
}
else{
System.out.print("not found");
}

}

}