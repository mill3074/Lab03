#include <iostream>
using namespace std;
void printMenu(int& choice) {
	cout << "Welcome to the Amazing Calculation Expert (A.C.E) 2.0!" << endl; 
	cout << "" << endl;
	cout << "Select an operation by inputting its corresponding digit." << endl;
	cout << "1. Add (A + B)" << endl;
	cout << "2. Subtract (A - B)" << endl;
	cout << "3. Multiply (A * B)" << endl;
	cout << "4. Divide (A / B)" << endl;
	cout << "\nYour Selection: ";
	cin >> choice;
}
void getChoices(float& A, float& B) {
	cout << "Please enter variable A: ";
	cin >> A;
	cout << "Please enter variable B: ";
	cin >> B;
	// The rest of this function is an exercise to the reader
}
void firstChoice(float A, float B) {
	cout << A << " + " << B << " = " << A+B << endl;
}
void secondChoice(float A, float B) {
	cout << A << " - " << B << " = " << A-B << endl;
}
void thirdChoice(float A, float B) {
	cout << A << " * " << B << " = " << A*B << endl;
}
void fourthChoice(float A, float B) {
	cout << A << " / " << B << " = " << A/B << endl;
}
int main() {
	int choice;
	float A;
	float B;
	printMenu(choice);
	getChoices(A, B);
	if (choice == 1) {
		firstChoice(A, B);
	}
	if (choice == 2) {
		secondChoice(A, B);
	}
	if (choice == 3) {
		thirdChoice(A, B);
	}
	if (choice == 4) {
		fourthChoice(A, B);
	}
	return 0;
}
