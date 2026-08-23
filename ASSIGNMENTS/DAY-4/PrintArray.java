import java.util.Scanner;
class PrintArray{
public static void main(String args[]){

int a[]= new int[5];

System.out.print("Enter 5 integers Of array:");
Scanner s = new Scanner(System.in);

for(int i=0;i<5;i++){
a[i]=s.nextInt();
}

for(int num : a){
System.out.print(" "+num);
}

}


}