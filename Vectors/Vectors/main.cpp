#include <iostream>
#include <vector>

using namespace std;

int main() {

	//Format: vector<DataType> nameOfVector
	//myVector.push_back(value) ==> adds am element to the end of the vector (also resizes it)
	//myVector.at(i) ==> returns element at specified index number
	//myVector.size() ==> returns an unsigned int equal to the number of elements
	//myVector.begin() ==> reads vector from first element (index 0)
	//myVector.insert(myVector.begin() + integer, new value) ==> adds element before specified index number
	//myVector.erase(myVector.begin() +integer) ==> removes elements AT specified index number
	//myVector.clear() ==> removes all elemnts in vector
	//myVector.empty() ==> returns value if whether vector is empty


	vector<int> myVector;

	myVector.push_back(3);
	myVector.push_back(7);
	myVector.push_back(12);
	myVector.push_back(1);
	myVector.push_back(2);
	myVector.push_back(314);

	cout << "Vector: ";

	//unsigned variable is always positive so that it can hold more date

	for (unsigned int i = 0;i<myVector.size();i++) {
		cout << myVector[i] << " ";

	}
	
	cout << endl;

	myVector.insert(myVector.begin() + 3, 5);

	cout << "Vector: ";

	for (unsigned int i = 0; i<myVector.size(); i++) {
		cout << myVector[i] << " ";

	}

	myVector.insert(myVector.begin() + 4, 0);

	if (myVector.empty()) {
		cout << endl << "Is Empty!";
	}
	else {
		cout << endl << "Is Not Empty!";
	}

	myVector.clear();

	if (myVector.empty()) {
		cout << endl << "Is Empty!";
	}
	else {
		cout << endl << "Is Not Empty!";
	}

	cout << endl;

	return 0;
}