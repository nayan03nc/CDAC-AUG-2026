import java.util.Scanner;

class ReverseString {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the String: ");
        String name = sc.nextLine();

        char ch[] = name.toCharArray();
        

     
        for (int i = ch.length-1; i >=0; i--){

System.out.print(" "+ch[i]);
}
}
}