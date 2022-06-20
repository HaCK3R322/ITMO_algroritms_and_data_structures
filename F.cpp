#include <iostream>
#include <list>
#include <string>

int main()
{
	std::string number;
	std::list<std::string> numbers;

	while (std::cin >> number) {
		numbers.push_back(number);
	}

	numbers.sort( [] (std::string str1, std::string str2) {
			return str1 + str2 > str2 + str1;
		}
	);
	
	for (std::list<std::string>::iterator it = numbers.begin(); it != numbers.end(); it++) {
		std::cout << *it;
	}

	return 0;
}
