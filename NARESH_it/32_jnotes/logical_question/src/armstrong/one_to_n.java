package armstrong;

public class one_to_n {
	public static void main(String[] args) {
		int last = 1000;
		for (int k = 0; k <= last; k++) {
			int n = k;
			int size = 0;
			int copy = n;
			int sum = 0;
			while (copy != 0) {
				size++;
				copy /= 10;
			}
			copy = n;

			while (copy != 0) {
				int rev = copy % 10;
				sum = sum + power1(rev, size);
				copy /= 10;
			}

			if (sum == n) {
				System.out.println("armstrong number : "+n);
			} else {
				System.out.println("not armstrong : "+n);
			}
		}

	}

	public static int power1(int num, int size) {
		int sum = 1;
		for (int i = 0; i < size; i++) {
			sum *= num;
		}
		return sum;
	}
}
