import java.util.Scanner;
import java.util.Timer;
import java.util.TimerTask;

public class Main {
		public static void main(String[] args) {
				Scanner scanner = new Scanner(System.in);
				System.out.print("Enter the duration of the timer in seconds: ");
				int duration = scanner.nextInt();

				Timer timer = new Timer();
				TimerTask task = new TimerTask() {
						int count = 0;
						@Override
						public void run() {
								count++;
								System.out.println("Timer: " + count);
								if (count == duration) {
										System.out.println("Timer is done!");
										timer.cancel();
								}
						}
				};
				// Repeat every 1000ms (1 second)
				timer.scheduleAtFixedRate(task, 0, 1000);
		}
}
