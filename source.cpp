#include <iostream>;
#include "Header.h"

using namespace std; 

float PDFO = .18f;
float MillTax = .015f;

float calculateLightTaxFee(float AnnIncome) {
	float TotalTax = .05f;
	if (AnnIncome > 7820000.0f) {
		TotalTax = .15f;
		cout << endl << "Light group; Tax fee of 15% is used" << endl;
	}
	return TotalTax * AnnIncome;
}

float calculateCommonTaxFee(float AnnIncome, float AnnExpenses) {
	if (AnnIncome - AnnExpenses < 0) return .0f;
	cout << endl << "Tax Components" << endl;
	cout << "PDFO\t\t" << (AnnIncome * PDFO) << "uan" << endl;
	cout << "MillTax\t\t" << (AnnIncome * MillTax) << "uan" << endl;
	return AnnIncome * (PDFO + MillTax);
}

float calculateEmployeeTexFee(int Salary) {
	cout << endl << "Tax Components" << endl;
	cout << "PDFO\t\t" << (Salary * PDFO) << "uan" << endl;
	cout << "MillTax\t\t" << (Salary * MillTax) << "uan" << endl;
	return Salary * (PDFO + MillTax);
}