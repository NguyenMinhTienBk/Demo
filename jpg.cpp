#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
	ifstream str;
	str.open("imagetoascii.txt");
	if (str.fail()) cout << "Can't open file";
	string line;
	while (  getline ( str ,line) )
	{
		cout << line << endl;
	}
	return 0;
}