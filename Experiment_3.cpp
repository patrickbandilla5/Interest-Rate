#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{	
	double netBalance, payment, d1, d2, interestRate, averageDailyBalance, interest;
	
	cout << "Enter the balance shown in the bill: ";
	cin >> netBalance;
	cout << "Enter payment made: ";
	cin >> payment;
	cout << "Enter number of days in the billing cycle: ";
	cin >> d1;
	cout << "Enter number of days payment is made before the billing cycle: ";
	cin >> d2;
	cout << "Enter interest rate per month: ";
	cin >> interestRate;

	interestRate = (interestRate / 100);
	averageDailyBalance = (netBalance * d1 - payment * d2) / d1;
	interest = (averageDailyBalance * interestRate);
	
	cout << fixed << showpoint << setprecision(2);
	
	cout << "Interest on unpaid balance: $" << interest << endl;
	
	getch();
	return 0;
	
}



