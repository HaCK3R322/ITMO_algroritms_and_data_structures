#include <iostream>
#include <vector>
#include <algorithm>

int can_be_placed(std::vector<int> coordinates, int required_space, int required_number_of_cows) {
	int cows = 1;
	int last = coordinates[0];
	for (auto i : coordinates) {
		if (i - last >= required_space) {
			cows += 1;
			last = i;
		}
	}
	return cows >= required_number_of_cows;
}

int main()
{
	int N, K;
	std::cin >> N >> K;
	std::vector<int> coordinates;

	for (int i = 0; i < N; i++) {
		int coord;
		std::cin >> coord;
		coordinates.push_back(coord);
	}
	std::sort(coordinates.begin(), coordinates.end());

	int left = 0;
	int right = coordinates.back() - coordinates[0] + 1;

	while (right > left + 1) { // is it right?
		int mid = (left + right) / 2;
		if (can_be_placed(coordinates, mid, K)) {
			left = mid;
		}
		else {
			right = mid;
		}
	}
	std::cout << left;

	return 0;
}
