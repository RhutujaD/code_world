public class Exercise50 {
    	public static void main(String args[]) {
		System.out.println("\nDivided by 3: ");		
		for (int i=3; i<30; i++) {
			if (i%3==0) 
			System.out.print(i +", ");			
		}			
				
		System.out.println("\n\nDivided by 8: ");
		for (int i=3; i<30; i++) {
			if (i%8==0) System.out.print(i +", ");			
		}
				
		System.out.println("\n\nDivided by 3&8: ");			
		for (int i=3; i<30; i++) {
			if (i%3==0 && i%8==0) System.out.print(i +", ");			
		}
		System.out.println("\n");
  }
}