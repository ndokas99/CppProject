#include <iostream>
using namespace std;

int n;
float excl;

void sortAscending(float array[]){
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(array[i] > array[j])
			{
				excl = array[i];
				array[i] = array[j];
				array[j] = excl;	
			}
		}
	}
	
	for(int k=0; k<n; k++)
	{
		cout << array[k] << " "	;
	}
}

void sortDescending(float array[]){
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(array[i] < array[j])
			{
				excl = array[i];
				array[i] = array[j];
				array[j] = excl;	
			}
		}
	}
	
	for(int k=0; k<n; k++)
	{
		cout << array[k] << " "	;
	}
}

void iaado_main(){
	int choice;
	cout << "How many numbers do you want to sort:\n";
	cin >> n;
	float list[n];
	cout << endl;
	
	cout << "Enter numbers to be sort:\n";
	for(int i=0; i<n; i++)
	{
		cout << "Number " << i+1 << ". ";
		cin >> list[i];
	}
	cout << "\n";
	
	ENTER: cout << "Which sort do you want to perform:\n\n";
	cout << "1. Ascending order\n";
	cout << "2. Descending order\n\n";
	cin >> choice;
	cout << endl;
	
	if(choice==1)
		sortAscending(list);
	else if(choice==2)
		sortDescending(list);
	else
	{
		cout << "Wrong input.";
		goto ENTER;
	}
}

