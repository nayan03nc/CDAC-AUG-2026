import java.util.Scanner;

class PalindromeCheck {
public static void main(String args[]) {
Scanner sc = new Scanner(System.in);
 System.out.print("Enter a String: ");
  String original = sc.nextLine();

           
String cleaned = original.replaceAll("[^a-zA-Z0-9]","").toLowerCase();

      
String reversed = "";
for (int i = cleaned.length() - 1; i >= 0; i--) {
reversed = reversed + cleaned.charAt(i);
 }

if (cleaned.equals(reversed)) 
{
 System.out.println("The String is a Palindrome!");
} else 
{
 System.out.println("It is NOT a Palindrome.");
 }
 }
}