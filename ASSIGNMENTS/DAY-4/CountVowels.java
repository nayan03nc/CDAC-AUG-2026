import java.util.Scanner;

class CountVowels {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the String: ");
        String name = sc.nextLine();

        char ch[] = name.toCharArray();
        int count = 0;

     
        for (int i = 0; i < ch.length; i++) {
           
         char c = Character.toLowerCase(ch[i]); 
 if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                count++;            }
        }

        System.out.print("Total Vowels: " + count);
    }
}