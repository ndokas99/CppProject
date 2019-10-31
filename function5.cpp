#include <iostream>
#include <cstdlib>
using namespace std;

string name = "HCT113";
int pin = 2019;

void mainMenu();

void login_func_main() 
{
	string username;
	int num, code;
	cout << "Select option\n\n";
	cout << "1. Login" << endl;
	cout << "2. Exit" << endl << endl;
	cin >> num;
	cout << endl;
	
	if (num==1)
	{
		cout << "Enter Username\n";
		cin >> username;
		cout << "Enter pin\n";
		cin >> code;
		cout << endl;
		if (username==name && code==pin)
		{
			mainMenu();
		}
		else
		{
			cout << "Your credentials are incorrect.\n\n";
			login_func_main();
		}
	}
	else if (num==2)
	{
		return;
	}
	else
	{
		cout << "Invalid Input. Try Again." << endl << endl;
	}
}

void add()
{
	float num1, num2;
	cout << "Enter first number\n";
	cin	>> num1;
	cout << "Enter second number\n";
	cin	>> num2;
	cout << "Sum is " << num1+num2 << endl << endl;
	mainMenu();
}

void sub()
{
	float num1, num2;
	cout << "Enter first number\n";
	cin	>> num1;
	cout << "Enter second number\n";
	cin	>> num2;
	cout << "Difference is " << num1 - num2 << endl << endl;
	mainMenu();
}

void div()
{
	float num1, num2;
	cout << "Enter first number\n";
	cin	>> num1;
	cout << "Enter second number\n";
	cin	>> num2;
	cout << "Quotient is " << num1 / num2 << endl << endl;
	mainMenu();
}

void mult()
{
	float num1, num2;
	cout << "Enter first number\n";
	cin	>> num1;
	cout << "Enter second number\n";
	cin	>> num2;
	cout << "Product is " << num1 * num2 << endl << endl;
	mainMenu();
}
	
void mod()
{
	int num1, num2;
	cout << "Enter first number\n";
	cin	>> num1;
	cout << "Enter second number\n";
	cin	>> num2;
	cout << "Remainder is " << num1 % num2 << endl << endl;
	mainMenu();
}	

void clp()
{
	cout << "Enter new username:\n";
	cin	>> name;
	cout << "Enter new pin:\n";
	cin	>> pin;
	cout << "\nUsername and PIN changed successfully." << endl << endl;
	mainMenu();
}
	
void mainMenu() 
{
	int num;
	cout << "Select the option you want: \n\n";
	cout << "1. Addition\n";
	cout << "2. Subtraction\n";
	cout << "3. Division\n";
	cout << "4. Multiplication\n";
	cout << "5. Modulus\n";
	cout << "6. Change login credentials\n";
	cout << "7. Logout\n\n";
	cin >> num;
	cout << endl;
	switch(num)
	{
		case 1: add(); break;
		case 2: sub(); break;
		case 3: div(); break;
		case 4: mult(); break;
		case 5: mod(); break;
		case 6: clp(); break;
		case 7: login_func_main(); break;
		default: cout << "Wrong input\n\n"; mainMenu(); break;
	}
}

