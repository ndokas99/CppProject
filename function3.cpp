#include <iostream>
using namespace std;

int fact(float x)
{
	if (x==1)
	{
		return 1;
	}
	else
	{
	return x * fact(x-1);
	}
}

void fact_func_main() {
	int num;
	cout << "Enter number:" << endl;
	cin >> num;
	cout << endl;
	cout << num << "! is " << fact(num);
}

