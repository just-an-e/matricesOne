#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Matrix.h"

extern template class Matrix<double>;
extern template class Matrix<int>;
//extern template class Matrix<string>;

using namespace std;

int favoriteAppear(int favorite, Matrix <int> numbers);
void printBackwards(Matrix <string> words);

/*
Justin Ecarma
8.0
3/10/2020
Extra: I used my matrix class instead of the array class or vector class. 
*/

int main()
{
	/*
	srand(time(NULL));
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
	
	for (int i = grades.length() - 2; i >= 0; i--) {
		cout << ", " << grades.getCell(0, i); 
	}

	cout << "\n The number of even numbers in the array is " << evencount << endl;

	//worksheet one, question 4
	
	Matrix <int> ages = Matrix <int>(1, 20);
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

		cout << "The sales for that day is " << sales.getCell(0, (day - 1)) << endl;

		cout << "Would you like to keep going? (\"No\" to stop going)" << endl;
		cin >> keepgoing;

	} while (keepgoing != "No");
	
	//worksheet two, question 1

	Matrix <int> numbersTwo = Matrix <int>(1, 10);
	int favnumber = 0, input;

	for (int i = 0; i < numbersTwo.length(); i++) {
		cout << "Enter a number:";
		cin >> input;
		numbersTwo.setCell(0, i, input);
	}

	cout << "What is your favorite number?" << endl;
	cin >> favnumber;
	cout << "Your favorite number appeared " << favoriteAppear(favnumber, numbersTwo) << " times." << endl;
	*/
	//worksheet two, question 2

	Matrix <string> backWords = Matrix <string>(1, 5);
	backWords.setCell(0, 1, "radar");
	backWords.setCell(0, 1, "warts");
	backWords.setCell(0, 1, "evil");
	backWords.setCell(0, 1, "racecar");
	backWords.setCell(0, 1, "toot");


}

int favoriteAppear(int favorite, Matrix <int> numbers) {
	int favnum = 0;

	for (int i = 0; i < numbers.length(); i++) {
		if (numbers.getCell(0, i) == favorite) {
			favnum++;
		}
	}

	return favnum;
}

void printBackwards(Matrix <string> words) {
	string placeholder = "";
	for (int j = 0; j < words.length(); j++) {
		for (int i = (words.getCell(0, j)).length() - 2; i >= 0; i--) {
			
		}
	}
}

