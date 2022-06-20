#include <iostream>

int main() {
	int N;
	std::cin >> N;

	int current_flower = 0;
	int previous_flower = current_flower;
	int same_flowers_count = 1;

	int current_start_id = 1;
	int current_range = 0;

	int max_start_id = 1;
	int max_range = 1;

	bool first_time = true;
	for (int i = 0; i < N; i++) {
		std::cin >> current_flower;
	
		

		if (current_flower == previous_flower) {
			same_flowers_count++;
		}
		else {
			same_flowers_count = 1;
		}

		if (same_flowers_count > 2) {
			if (current_range > max_range) {
				max_range = current_range;
				max_start_id = current_start_id;
			}
			current_range = 2;
			current_start_id = i;
			same_flowers_count = 2;
		}
		else {
			current_range++;
		}

		previous_flower = current_flower;
	}

	if (current_range > max_range) {
		max_range = current_range;
		max_start_id = current_start_id;
	}

	std::cout << max_start_id << " " << max_start_id + max_range - 1 << std::endl;

	return 0;
}
