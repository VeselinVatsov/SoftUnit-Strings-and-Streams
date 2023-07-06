#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	string line; //5a3 1f a0aaaa f1fg3
	getline(cin, line);

	istringstream inp(line);
	string current;

	string minNoise = "";

	while (inp >> current) {

		string curNoise;

		for (int i = 0; i < current.length(); i++) {

			char c = current[i];

			if ( !(c >= '0' && c <= '9')) {
				curNoise += c;
			}		
		}
		if (curNoise.length()) {

			if (minNoise.length() == 0) {
				minNoise = curNoise;
			}
			else if (curNoise < minNoise)
				minNoise = curNoise;
		}
	}
	cout << minNoise;
}