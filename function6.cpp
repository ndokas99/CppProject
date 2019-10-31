#include<iostream> 
using namespace std; 

float get_a_number(void)
{
	float num;
	cout << "Enter radius of pie: " << endl;
	cin >> num;
	cout << endl;
	return num;
}

void display_input(float a)
{
	cout << "Radius entered is " << a << "cm." << endl << endl; 
}

float find_area(float x)
{
	float area;
	const float PI = 3.142;
	area = PI * x * x;
	return area;
}

float calccost(float y)
{
	float cost;
	cost = y * 0.001;
	return cost;
}

void draw_pie(float b, float c)
{
	cout << "Your pie is of radius "<< b << "cm and costs $" << c << endl;
}

void cop_main() { 
	float rad, pie_area, pie_cost;
	rad = get_a_number();
	display_input(rad);
	pie_area = find_area(rad);
	pie_cost = calccost(pie_area);
	draw_pie(rad, pie_cost);
}

