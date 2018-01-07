public class problem2 {

	public static void main(String[] args) {
		int fibo = 2;
		int problemSum = 0;
		int i = 1;

		while (fibo < 4000000) {
			if (fibo % 2 == 0) {
				problemSum += fibo;
			}

			int temp = fibo + i;
			i = fibo;
			fibo = temp;
		}

		System.out.println("Sum of fibonacci even terms under 4,000,000: " + problemSum);
	}
}