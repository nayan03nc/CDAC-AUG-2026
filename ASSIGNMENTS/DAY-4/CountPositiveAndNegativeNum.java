import java.util.Scanner;
class CountPositiveAndNegativeNum
{
public static void main (String args[])
{

int a[]= new int[6];

Scanner sc = new Scanner(System.in);
System.out.print("Enter 6 integers:");

for(int i=0 ; i<6; i++){
a[i] = sc.nextInt();
}

int countp=0;
int countn=0;

for(int i=0 ; i<6;i++)
{
if(a[i]>0){
countp++;
}

else if(a[i]<0){
countn++;
}
}

System.out.println("Total Positive Number is: "+countp);
System.out.print("Total Negative Number is: "+countn);
}

}