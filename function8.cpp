#include<iostream> 
using namespace std; 

void seq_main()
{
	for (int x=1 ; x<=5 ; x++)
	{
		int y = x-1;
		while(y >= 0)
		{
			cout << x << "\t";
			cout << x - y << "\t";
			y--;
		}
		cout << endl;
	}
}

