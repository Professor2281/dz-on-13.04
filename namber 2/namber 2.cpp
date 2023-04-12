#include <iostream>
using namespace std;
int main()
{
	double number;
	int dollar, cent;
	cout << "number : ";
	cin >> number;
	dollar = number;
	cent = (number - dollar) * 100;
	return 0;
}