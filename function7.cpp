#include<iostream> 
using namespace std; 

bool IsLeap(unsigned int x)
{
	if (x % 100 == 0)
	{
		if (x % 400 == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	if (x % 4 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
	 
}

void leap_main() {
	bool result;
	int year; 
	cout << "Enter year:" << endl;
	cin >> year;
	result = IsLeap(year);
	if (result==true)
		cout << "It is a leap year";
	else
		cout << "It is not a leap year";
}

