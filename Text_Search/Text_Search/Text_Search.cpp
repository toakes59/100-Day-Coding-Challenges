#include <fstream>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
using namespace std;

//Convert a string to upper case
string toUpperCase(string &str) {
	string upperCase;
	
	for (int i = 0; i < str.size(); i++) {
		upperCase.push_back(toupper(str[i]));
	}
	return upperCase;
}

int main()
{
	//Open file
	ifstream inputFile("Text.txt");
	if (inputFile.fail()) {
		cout << "Unable to open data file.\n";
		exit(1);
	}

	//Read input file, line by line, counting lines with the searched word in it
	string nextLine, search;
	int searchCount = 0;

	cout << "Enter the word you want to search for (ALL CAPS): ";
	cin >> search;

	while (getline(inputFile, nextLine)) {
		string upperCase = toUpperCase(nextLine);
		if (upperCase.find(search) != string::npos) {
			searchCount++;
			cout << setw(4) << searchCount << ": " << nextLine << endl;
		}
	}
	inputFile.close();

	cout << "\n\n";
	cout << "File has " << searchCount << " references to " << search << endl;


}