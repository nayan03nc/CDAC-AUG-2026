import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.TreeSet;

public class ArrayL2 {
	 
	public static void main(String[]args) {
		
		//creating list 
			ArrayList <String> al = new ArrayList<String>();
			
			//adding color in created arraylist
			al.add("Red");
			al.add("blue");
			al.add("Green");
			al.add("yellow");
			
			//add color at specific index
			al.add(0,"pink");
			al.add(1,"black");
			System.out.println(al);
			
			//retrive element from specific index
			
			System.out.println("coloure at index 0:"+al.get(0));
			System.out.println("coloure at index 1:"+al.get(1));
			System.out.println(al);
			// update specific array element by given element.
			
			al.set(1, "pink");
			System.out.println("After updating list :"+al);
			
			// remove 3rd element from arraylist
			
			al.remove(2);
			System.out.println("after removing 3rd element list is:"+al);
			
			//search elements
			
			String searchelement ="Green";
			if(al.contains(searchelement)) {
				System.out.println(searchelement+" found at index "+al.indexOf(searchelement));
				
			}
			
			//sort array list 
			
			System.out.println("before sorting list is:"+al);
			
			Collections.sort(al);
			System.out.println("after sorting lis is:"+al);
			
			Collections.shuffle(al);
			
			System.out.println("After suffle:"+al);
			
			//copy arraylist
			
			ArrayList <String> a2 = new ArrayList<String>();
			a2.add("Nayan");
			a2.add("Niraj");
			a2.add("ashish");
			System.out.println("before copy:"+a2);
			Collections.copy(al, a2);
			System.out.println("after copy:"+al);
			
			
			
			//reverse elements of list
			
			Collections.reverse(al);
			System.out.println("After reversing:"+al);
			
			//tree set
			
			
			TreeSet<String> ts = new TreeSet<String>();
			//add element in tree set
			ts.add("yellow");
			ts.add("green");
			ts.add("dark green");
			
			System.out.println("after adding color in tree set :"+ts);
			
			//create new tree set and add all element of previous ts
			TreeSet<String> ts1 = new TreeSet<String>();
			ts1.addAll(ts);
			System.out.println("After adding all element from another Ts:"+ts1);
			
			//reverse tree set
			TreeSet<String> reversets = new TreeSet<String>(Comparator.reverseOrder());
			
			reversets.addAll(ts1);
			
			System.out.println("after reverse:"+reversets);
			
			//1st and last element
			
			System.out.println("First element:"+reversets.first());
			System.out.println("last element:"+reversets.last());
			
			//greater or equal element in tree set with ceiling method
			TreeSet<Integer> intts = new TreeSet<Integer>();
			intts.add(10);
			intts.add(15);
			System.out.println(intts.ceiling(8));
			System.out.println(intts.ceiling(11));
			System.out.println(intts.ceiling(15));
			
			
		}
		

	}


