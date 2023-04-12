#include <iostream>
using namespace std;
int main()
{
	double speed, distance, time;
	int minutes, seconds;
	cout << "Calculating running speed.";
	cout << " Enter the length of distance(meters) = ";
	cin >> distance;
	cout << " Enter time(min.sec) = ";
	cin >> time;
	minutes = time;
	seconds = (time - minutes) * 100;
	time = (minutes * 60) + seconds;
	speed = distance / time * 3.6;
	cout << "Distance: " << distance << "m\n";
	cout << "Time: " << minutes << " min " <<
		seconds << " sec = " << time <<
		" seconds\n";
	cout << "You were running at speed " <<
		speed << "km/h\n";
	return 0;
}