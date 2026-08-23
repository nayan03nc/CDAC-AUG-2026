import java.util.Scanner;

class PrintNameInArray{

public static void main(String args[]){


String a[]= new String[4];

System.out.print("Enter 4 Names :");
Scanner s = new Scanner(System.in);

for(int i=0;i<4;i++){
a[i]=s.next();
}

for(String str : a){
String Name=str;
System.out.println(Name);
}


}


}