#include <iostream>
using namespace std;

float calc(float oh,float nh)
{
	float bonus;
	bonus = oh + (0.67 * nh);
	return bonus;
}

void bcalc_main() {
	float NHRS, OVHRS, BONUS;
	cout << "Enter number of normal hours worked" << endl;
	cin >> NHRS;
	cout << "Enter number of over-time hours worked" << endl;
	cin >> OVHRS;
	cout << endl;
	BONUS = calc(OVHRS, NHRS);
	cout << "Bonus is " << BONUS << endl;
}

