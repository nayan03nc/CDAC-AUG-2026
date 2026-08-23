import java.util.Scanner;
class FactoOfN{
public static void main(String args[]){

System.out.print("Enter the Number:");
Scanner sc = new Scanner(System.in);
int num= sc.nextInt();
int fact=1;

for(int i =num; i>=1; i--){
fact= fact*i;
}
System.out.print("Factorial of "+num+" is: "+fact);
}
}