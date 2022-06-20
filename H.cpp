#include <iostream>
#include <list>

int main()
{
	int n, k;
	std::cin >> n >> k;
	
	int for_free = n / k;

	std::list<int> products;

	int product = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> product;
		products.push_back(product);
	}

	products.sort();
	products.reverse();

	int sum = 0;
	std::list<int>::iterator it = products.begin();
	for (int i = 1; i <= n; i++) {
		if (i % k != 0) sum += *it;
		it++;
	}

	std::cout << sum;
}
