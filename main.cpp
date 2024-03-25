#include <iostream>
#include <chrono>
#include <thread>
#include <cmath> // Include cmath for ceil function

int main() {
		double duration;

		std::cout << "Enter the duration in seconds: ";
		std::cin >> duration;

		auto start = std::chrono::steady_clock::now();

		while (true) {
				auto end = std::chrono::steady_clock::now();
				std::chrono::duration<double> elapsed_seconds = end - start;

				double remaining_time = duration - elapsed_seconds.count();

				if (remaining_time <= 0)
						break;

				int remaining_time_rounded = std::ceil(remaining_time); // Round up the remaining time

				std::cout << "Remaining time: " << remaining_time_rounded << "s\n";

				std::this_thread::sleep_for(std::chrono::seconds(1)); // Pause for 1 second
		}

		std::cout << "Timer finished! Elapsed time: " << duration << "s\n";

		return 0;
}
