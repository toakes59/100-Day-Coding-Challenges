#include <iostream>
#include <string>

#include "BMI.h"

using namespace std;

int main() {

	string name;
	int height;
	double weight;

	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your height (in inches): ";
	cin >> height;
	cout << "Enter your weight (in pounds): ";
	cin >> weight;

	BMI Student_1(name, height, weight);
	
	cout << endl << "Patient Name: " << Student_1.getName()
		<< endl << "Height: " << Student_1.getHeight()
		<< endl << "Weight: " << Student_1.getWeight() 
		<< endl	<< Student_1.calculateBMI() << endl;;
	

	cout << "\nEnter your name: ";
	cin >> name;
	cout << "Enter your height (in inches): ";
	cin >> height;
	cout << "Enter your weight (in pounds): ";
	cin >> weight;

	BMI Student_2;

	Student_2.setName(name);
	Student_2.setHeight(height);
	Student_2.setWeight(weight);
	
	cout << endl << "Patient Name: " << Student_2.getName()
		<< endl << "Height: " << Student_2.getHeight()
		<< endl << "Weight: " << Student_2.getWeight()
		<< endl << Student_2.calculateBMI() << endl;

	cout << endl <<"Student 1 Name: " <<Student_1.getName() << endl;

	return 0;
}