#include <iostream>
using namespace std;
int main()
{
	int days, weeks;
	cout << "days : ";
	cin >> days;
	weeks = days / 7;
	days = days % 7;
	cout << "weeks : " << weeks << "\n";
	cout << "days : " << days << "\n";
	return 0;
}