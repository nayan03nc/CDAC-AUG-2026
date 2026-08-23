import java.util.Scanner;
class FindMaxNo
{
public static void main (String args[])
{

int a[]= new int[5];

Scanner sc = new Scanner(System.in);
System.out.print("Enter 5 integers:");

for(int i=0 ; i<5; i++){
a[i] = sc.nextInt();
}

int max =a[0];

for(int i=0 ; i<5;i++)
{

if(a[i]>max)
{
max=a[i];
}
}

System.out.print("max is:"+max);
}

}