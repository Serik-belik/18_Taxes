#include <iostream>;
#include "Header.h"

using namespace std;

int main() {
	cout << "I'm a business owner (B)"<< endl;
	cout << "I'm an employee (E)" << endl;
	cout << "Select your position: ";
	char Position;
	do cin >> Position; while (Position != 'E' && Position != 'B');

	float BruttoIncome;
	cout << endl << "Enter your income before taxing (Brutto), uan: ";
	cin >> BruttoIncome;

	float Expensivess;
	cout << "Enter your expensivess, uan: ";
	cin >> Expensivess;

	float Tax;
	if (Position == 'B') {
		char TaxSystem;
		do {
			cout << "Select your tax system S - simply (3d group) or C - common: ";
			cin >> TaxSystem;
		} while (TaxSystem != 'S' && TaxSystem != 'C');

		if (TaxSystem == 'S') Tax = calculateLightTaxFee(BruttoIncome);
		else if (TaxSystem == 'C') Tax = calculateCommonTaxFee(BruttoIncome, Expensivess);
	}
	else Tax = calculateEmployeeTexFee(BruttoIncome);
	cout << "==================================" << endl;
	cout << "Total Tax\t" << (int) Tax << "uan" << endl;

	float NettoIncome = BruttoIncome - Tax;
	cout << endl << "Netto Income\t" << (int) NettoIncome << "uan" << endl;
	float Profit = NettoIncome - Expensivess;
	cout  << "Profit\t\t" << (int) Profit << "uan" << endl;

	return 0;
}