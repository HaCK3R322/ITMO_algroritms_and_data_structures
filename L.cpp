#include <vector>
#include <iostream>
#include <utility>


using namespace std;

std::pair<int, int> min_arr(int* arr, int arr_size, int current_pos) {
	int min_number = arr[0];
	int min_id = 0;
	for (int i = 0; i < arr_size; i++) {
		if (min_number > arr[i]) {
			min_number = arr[i];
			min_id = i;
		}
	}

	return std::pair<int, int>(min_id + current_pos, min_number);
}

int main() {
	int N, K;
	cin >> N >> K;

	int* range = (int*)malloc(sizeof(int) * N);

	int number;
	for (int i = 0; i < N; i++) {
		cin >> number;
		range[i] = number;
	}

	int min = 1000000, min_id;
	min_id = -1;

	int windows_num = N - K + 1;
	for (int i = 0; i < windows_num; i++) {
		int end_id = i + K;
	
		if (i > min_id) {
			min = range[i];
			for (int j = i + 1; j < end_id; j++) {
				if (min >= range[j]) {
					min_id = j;
					min = range[j];
				}
			}
		}
		else if (min >= range[end_id - 1]) {
			min_id = end_id - 1;
			min = range[end_id - 1];
		}

		std::cout << min << " ";
	}

	return 0;
}
