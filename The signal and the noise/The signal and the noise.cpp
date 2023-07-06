#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	
	string line; //5a3 1f a0aaaa f1fg3
	getline(cin, line);

	istringstream inp(line);
	string current;

	unsigned max = 0;

	while (inp >> current) {

		unsigned num = 0;

		for (int i = 0; i < current.length(); i++) {

			char c = current[i];

			if (c >= '0' && c <= '9') {
				num = num * 10 + (c - '0');
			}
		}

		if (num > max)
			max = num;
	}

	cout << max << endl;
}