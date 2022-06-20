#include <iostream>
#include <fstream>
#include <unordered_map>
#include <stack>
#include <string>
#include <list>

int main() {
	const int MAGIC = 1000000001;

	std::unordered_map<std::string, int> values_map;
	std::stack<std::list<std::pair<std::string, int>>> scope_changes_stack;

	std::ifstream fin("input.txt");
	std::ofstream fout("output.txt");

	scope_changes_stack.push(std::list<std::pair<std::string, int>>()); // zero-level scope

	std::string line;
	while (true) {
		fin >> line;
		if (fin.eof()) break;

		switch (line[0]) {
		case '{':
			scope_changes_stack.push(std::list<std::pair<std::string, int>>()); // create new level of changes
			break;
		case '}':
			for (auto it = scope_changes_stack.top().rbegin(); it != scope_changes_stack.top().rend(); it++) {
				if (it->second == MAGIC) {
					values_map.erase(it->first);
				}
				else {
					values_map.find(it->first)->second = it->second;
				}
			}
			scope_changes_stack.pop(); // downgrade changes list
			break;
		default:
			int i = line.find('=');
			std::string str_before = line.substr(0, i);
			std::string str_after = line.substr(i + 1);

			if (values_map.find(str_before) == values_map.end()) { // init var, if doesn't exists
				// init with zero in values map
				values_map.emplace(str_before, 0);
				// make note in changes for this scope to delete this var
				scope_changes_stack.top().push_back(std::pair<std::string, int>(str_before, MAGIC));
			}
			else {
				scope_changes_stack.top().push_back(std::pair<std::string, int>(
					values_map.find(str_before)->first,
					values_map.find(str_before)->second
					));
			}

			if (std::isdigit(str_after[0]) || str_after[0] == '-') { // if right part is number
				values_map.find(str_before)->second = std::stoi(str_after);
			}
			else { // if right part is a var
				if (values_map.find(str_after) != values_map.end()) { // if right part var exist
					values_map.find(str_before)->second = values_map.find(str_after)->second;
				}
				else { // if right part doesn't exist
					values_map.find(str_before)->second = 0;
				}
				fout << values_map.find(str_before)->second << std::endl;
			}

			break;
		}
	}

	fin.close();
	fout.close();

	return 0;
}
