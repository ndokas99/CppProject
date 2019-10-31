#include <iostream>
#define pi 3.142
using namespace std;
 
void aos_main();

void CalArea(int num){
	float result;
	switch (num)
	{
		case(1):
			float r, area_c;
			cout << "Enter radius in cm:" << endl;
			cin >> r;
			area_c = pi*r*r;
			result = area_c;
			break;
		case(2):
			float a, b, area_r;
			cout << "Enter length and width in cm respectively:" << endl;
			cin >> a >> b;
			area_r = a*b;
			result = area_r;
			break;
		case(3):
			float c, h, area_t;
			cout << "Enter base and height in cm respectively:" << endl;
			cin >> c >> h;
			area_t = 0.5 * c * h;
			result = area_t;
			break;
		default:
			cout << "Invalid input, ";
			aos_main();
	}
	cout << endl;
	cout << "The area of your shape is " << result << " square cm.";
}

void aos_main() {
	int num;
	cout<<"Select area to be calculated:\n";
	cout<<"1. area of a circle\n";
	cout<<"2. area of a rectangle\n";
	cout<<"3. area of triangle\n\n";
	cin >> num;
	cout << endl;
	CalArea(num);
}

