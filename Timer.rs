use rand::Rng;
use std::{io, thread, time};

fn main() {
		let mut rng = rand::thread_rng();

		loop {
				println!("Enter the timer duration in seconds (or type 'exit' to quit):");

				let mut input = String::new();
				io::stdin().read_line(&mut input).expect("Failed to read line");

				// Check if the user wants to exit
				if input.trim() == "exit" {
						println!("Exiting timer...");
						break;
				}

				// Parse the input as u64
				let timer_duration: u64 = match input.trim().parse() {
						Ok(num) => num,
						Err(_) => {
								println!("Invalid input. Please enter a valid number.");
								continue;
						}
				};

				println!("Starting timer for {} seconds...", timer_duration);

				for i in (1..=timer_duration).rev() {
						println!("Remaining time: {} seconds", i);
						thread::sleep(time::Duration::from_secs(1));
				}

				println!("Timer finished!");
		}
}
