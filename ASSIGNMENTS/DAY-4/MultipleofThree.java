import java.util.Scanner;
class MultipleofThree{
public static void main(String args[]){
Scanner sc = new Scanner(System.in);
System.out.print("Enter the Number:");
int N=sc.nextInt();

for(int i=3 ; i<=N; i+=3){
int mul=1;
mul=mul*i;
System.out.print(" "+mul);
}

}


}