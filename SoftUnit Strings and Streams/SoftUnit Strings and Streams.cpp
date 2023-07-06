#include<iostream>
#include<string>
#include <sstream>
using namespace std; 

int main()
{
    string str;
    getline(cin, str);

    istringstream iSt(str);
    ostringstream oSt;

    int num = stoi(str);
    int sum = 0;

    string current;

    while (iSt >> current) {

        char c = current[0];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            oSt << current << " ";
        }
        else
        {
            sum += stoi(current);
        }
    }
    cout << sum << endl;
    cout << oSt.str() << endl;
}
