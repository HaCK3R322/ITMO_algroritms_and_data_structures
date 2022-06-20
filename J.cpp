#include <iostream>
#include <list>
#include <vector>
#include <queue>
#include <deque>

class GoblinsQueue {
public:
	void print_queue() {
		std::cout << "q1=[ ";
		int queue1_size = queue1.size();
		std::deque<int> q1_copy;
		for (int i = 0; i < queue1_size; i++) {
			std::cout << queue1.front() << " ";
			q1_copy.push_back(queue1.front());
			queue1.pop_front();
		}
		std::cout << "] (" << queue1.size() << ", " << q1_copy.size() << ")";
		for (int i = 0; i < queue1_size; i++) {
			queue1.push_back(q1_copy.front());
			q1_copy.pop_front();
		}
		std::cout << "(" << queue1.size() << ", " << q1_copy.size() << ")";



		std::cout << "		q2=[ ";
		int queue2_size = queue2.size();
		std::deque<int> q2_copy;
		if (queue2.size() > 0) {
			for (int i = 0; i < queue2_size; i++) {
				std::cout << queue2.front() << " ";
				q2_copy.push_back(queue2.front());
				queue2.pop_front();
			}
			for (int i = 0; i < queue2_size; i++) {
				queue2.push_back(q2_copy.front());
				q2_copy.pop_front();
			}
		}
		std::cout << "]\n";
	}


	// LOGIC HERE /////////////////////////

	void push_average(int goblin) {
		queue2.push_back(goblin);
	}
	void push_priv(int goblin) {
		queue1.push_back(goblin);
	}
	void balance() {
		if (queue1.size() > (queue2.size() + 1)) {
			queue2.push_front(queue1.back());
			queue1.pop_back();
		}
		else if (queue1.size() < queue2.size()) {
			queue1.push_back(queue2.front());
			queue2.pop_front();
		}
	}

	int get_goblin() {
		int goblin = queue1.front();
		queue1.pop_front();
		return goblin;
	}
private:
	std::deque<int> queue1;
	std::deque<int> queue2;

	void move_from_q1back_to_q2front() {
		if (queue1.size() > 0) {
			queue2.push_front(queue1.back());
			queue1.pop_back();
		}
	}

	void move_from_q2front_to_q1back() {
		queue1.push_back(queue2.front());
		queue2.pop_front();
	}
};

int main() {
	int N;
	std::cin >> N;

	GoblinsQueue gq;

	char action;
	int goblin;
	for (int i = 0; i < N; i++) {
		std::cin >> action;

		switch (action) {
		case '+':
			std::cin >> goblin;
			gq.push_average(goblin);
			break;
		case '*':
			std::cin >> goblin;
			gq.push_priv(goblin);
			break;
		case '-':
			std::cout << gq.get_goblin() << std::endl;
			break;
		}

		/*std::cout << "before balance: ";
		gq.print_queue();*/

		gq.balance();

		/*std::cout << "after balance: ";
		gq.print_queue();
		std::cout << std::endl;*/
	}

	return 0;
}
