#include <iostream>
using namespace std;
int main()
{
	int seconds, minutes, hours;
	cout << "seconds : ";
	cin >> seconds;
	minutes = seconds / 60;
	seconds = seconds % 60;
	hours = minutes / 60;
	minutes = minutes % 60;
	cout << "hours : " << hours << "\n";
	cout << "minutes : " << minutes << "\n";
	cout << "seconds : " << seconds << "\n";
	return 0;
}