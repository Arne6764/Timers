#include <stdio.h>
#include <time.h>
#include <unistd.h> 

void start_timer(int duration) {
		time_t start = time(NULL);
		printf("Timer started for %d seconds...\n", duration);

		for(int i = duration; i > 0; i--) {
				printf("Time left: %d seconds\n", i);
				sleep(1);
		}
}

void stop_timer() {
		printf("Timer stopped.\n");
}

int main() {
		int duration;
		printf("Enter the duration of the timer in seconds: ");
		scanf("%d", &duration);

		start_timer(duration);
		stop_timer();

		return 0;
}
