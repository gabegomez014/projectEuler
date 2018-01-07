public class problem1 {

	public static void main(String[] args) {
		int total = 0;

		for(int i = 0; i < 1000; i++) {
			int remainder3 = i % 3;
			int remainder5 = i % 5;

			if (remainder3 == 0 || remainder5 == 0) {
				total += i;
			}
		}

		System.out.println("The sum of all multiple 3 and 5 below 1000 is " + total);
	}
}