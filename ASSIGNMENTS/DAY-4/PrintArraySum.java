import java.util.Scanner;
class PrintArraySum{
public static void main(String args[]){

int sum=0;
int a[]= new int[5];

System.out.print("Enter 5 integers Of array:");
Scanner s = new Scanner(System.in);

for(int i=0;i<5;i++){
a[i]=s.nextInt();
}

for(int num : a){

sum=sum+num;

}
System.out.print("Sum is: "+sum);

}


}