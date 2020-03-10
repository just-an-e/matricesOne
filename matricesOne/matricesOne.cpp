#include <iostream>
#include <stdlib.h>
#include "Matrix.h"

extern template class Matrix<double>;
//extern template class Matrix<string>;

using namespace std;

int main()
{
	//worksheet one, question 2
	double sum = 0, average;
	Matrix <double> numbersOne = Matrix <double>(1, 6);
	numbersOne.setCell(0, 0, 85.8);
	numbersOne.setCell(0, 1, 93.7);
	numbersOne.setCell(0, 2, 76);
	numbersOne.setCell(0, 3, 88.5);
	numbersOne.setCell(0, 4, 100);
	numbersOne.setCell(0, 5, 91.3);

	for (int i = 0; i < numbersOne.length(); i++) {
		sum = sum + numbersOne.getCell(0, i);
	}
	average = sum / numbersOne.length();

	cout << "Average: " << average << "\n" << endl;
	
	//worksheet one, question 3

	int evencount = 0;
	Matrix <int> grades = Matrix <int>(1, 10);

	for (int i = 0; i < grades.length(); i++) {
		grades.setCell(0, i, (rand() % 10 + 1));
	}

	cout << grades.getCell(0, 0);
	for (int i = 1; i < grades.length(); i++) {
		if (grades.getCell(0, i) % 2 == 0) {
			evencount++;
		}
		cout << ", " << grades.getCell(0, i);
	}
	
	cout << "\n" << grades.getCell(0, grades.length() - 1);
	for (int i = grades.length() - 2; i > 0; i--) {
		cout << ", " << grades.getCell(0, i); 
	}

	cout << "\n The number of even numbers in the array is " << evencount << endl;

	//worksheet one, question 4
	
	Matrix <int> ages = Matrix <int>(0, 20);
	int aboveFifteen = 0, input;

	for (int i = 0; i < ages.length(); i++) {
		cout << "Enter age #" << (i + 1) << ":";
		cin >> input;
		ages.setCell(0, i, input);
		if (input > 15) {
			aboveFifteen++;
		}
	}  
	cout << "The number of numbers greater than 15 is " << aboveFifteen << endl;

	//worksheet one, question 5
	 
	int day;
	string keepgoing;
	Matrix <int> sales = Matrix <int>(1, 7);
	sales.setCell(0, 0, 83);
	sales.setCell(0, 1, 12);
	sales.setCell(0, 2, 23);
	sales.setCell(0, 3, 33);
	sales.setCell(0, 4, 45);
	sales.setCell(0, 5, 65);
	sales.setCell(0, 6, 76);

	do {
		cout << "Which day would you like to see? (1 = Monday, 2 = Tuesday, etc.)" << endl;
		cin >> day;

		cout << "The sales for that day is " << 

	} while (keepgoing != "No");

}

