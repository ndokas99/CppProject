#include <iostream>
using namespace std;

char grade(float x)
{
	if (x<=100 and x>=70)
	{
		return 'A';
	}
	else if (x<70 and x>=60)
	{
		return 'B';
	}
	else if (x<60 and x>=50)
	{
		return 'C';
	}
	else if (x<50 and x>=45)
	{
		return 'D';
	}
	else if (x<45 and x>=40)
	{
		return 'E';
	}
	else if (x<40 and x>=30)
	{
		return 'O';
	}
	else
	{
		return 'F';
	}
}

void aglm_main() {
	float a, b, c, d, e, ave, sum, g, l;
	
	cout << "Input the five marks\n";
	cin >> a >> b >> c >> d >> e;
	cout << endl;
	
	cout << "Grade for " << a << " is " << grade(a) << endl;
	cout << "Grade for " << b << " is " << grade(b) << endl;
	cout << "Grade for " << c << " is " << grade(c) << endl;
	cout << "Grade for " << d << " is " << grade(d) << endl;
	cout << "Grade for " << e << " is " << grade(e) << endl << endl;
		
	sum= a+b+c+d+e;
	ave= sum/5;
	cout<<"Average is "<<ave<<endl; 
	
	g = max(a,max(b,max(c,max(d,e))));
	cout<<"Maximum is "<<g<<endl;
	
	l = min(a,min(b,min(c,min(d,e))));
	cout<<"Minimum is "<<l<<endl;
}

