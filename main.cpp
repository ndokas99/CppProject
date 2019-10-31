# include <iostream>
# include <cmath>
# include "array6.cpp" 
# include "files.cpp"
# include "function1.cpp"
# include "function2.cpp"
# include "function3.cpp"
# include "function4.cpp"
# include "function5.cpp"
# include "function6.cpp"
# include "function7.cpp"
# include "function8.cpp"
using namespace std;

//declaration of primary functions. 
void login();
void main_menu();


/************BASIC****************/
void basic();
//definitions of questions in basic. 
void aap() 
{
	const double PI = 3.142;
	double radius, area, per;
	cout << "Enter radius:"<< endl;
	cin >> radius;
	cout << endl;
	area = PI*radius*radius;
	per = 2*PI*radius;
	cout << "Area of circle is: " << area << endl;
	cout << "Perimeter of circle: " << per << endl;
	
    cout << endl << endl;
    basic();
}

void conv() 
{
	int option;
	cout << "What do you want to convert:" << endl;
	cout << "1)Celsius to Fahr" << endl;
	cout << "2)Fahr to Celsius" << endl;
	cout << "Enter option 1 or 2" << endl;
	cin >> option;
	cout << endl;
	if (option==1)
	{
		float celc, fahr;
		cout << "Enter temp:" << endl;
		cin >> celc;
		cout << endl;
		fahr = (celc * 9/5) + 32;
		cout << "The temp in Fahr is " << fahr << endl;
	}
	else
	{
		float celc, fahr;
		cout << "Enter temp:" << endl;
		cin >> fahr;
		cout << endl;
		celc = (fahr-32)*5/9; 
		cout << "The temp in Celsius is " << celc << endl;
	}
    cout << endl << endl;
    basic();
}

void iaa() 
{
	double P, R, T, I, A;
	cout << "Enter Principal:" << endl;
	cin >> P;
	cout << "Enter Rate:" << endl;
	cin >> R;
	cout << "Enter Time:" << endl;
	cin >> T;
	cout << endl;
	I = P*R*T;
	A = P*(1+R*T);
	cout << "Simple Interest is " << I << endl;
	cout << "Total accrued amount is " << A << endl;
	
    cout << endl << endl;
    basic();
}

void retail() 
{
	int NI;
	double UP, TP, VAT, GT;
	cout << "Enter number of items" << endl;
	cin >> NI;
	cout << "Enter unit price of item" << endl;
	cin >> UP;
	TP = NI * UP;
	VAT = 0.15 * TP;
	GT = TP + VAT;
	cout << "Total price: " << TP << endl;
	cout << "Value Added Tax: " << VAT << endl;
	cout << "Grand Total: " << GT << endl;
	
    cout << endl << endl;
    basic();
}

void srep() 
{
	double salary = 150;
	double sales, commission, m_earnings;
	cout << "Enter Sales Value:" << endl;
	cin >> sales;
	cout << endl;
	commission = 0.10 * sales;
	m_earnings = salary + commission;
	cout << "Expected monthly earnings: " << m_earnings << endl;
	
    cout << endl << endl;
    basic();
}

void payroll() 
{
	string name;
	double hours, rate, gs, nssa, maid, paye, trans, hous, ns;
	
	cout << "Enter your name" << endl;
	cin >>name ;
	cout << "Enter your hours" << endl;
	cin >>hours;
	cout << "Enter your hourly rate" << endl;
	cin >>rate;
	cout << endl;
	
	gs = hours * rate;
	nssa = 0.05 * gs;
	maid = 0.02 * gs;
	paye = 0.03 * gs;
	trans= 0.15 * gs;
	hous = 0.20 * gs;
	ns = gs+trans+hous-nssa-maid-paye;
	
	cout<< "Gross salary is "<< gs << endl;
	cout<< "Deductions are "<< nssa+maid+paye << endl;
	cout<< "Allowances are "<< hous+trans << endl;
	cout<< "Net salary is "<< ns;
	
    cout << endl << endl;
    basic();
}

void cylinder() 
{
	const double PI = 3.142;
	double radius, height, volume;
	cout << "Enter radius of cylinder:" << endl;
	cin >> radius;
	cout << "Enter height of cylinder:" << endl;
	cin >> height;
	volume = PI* radius * radius * height;
	cout << "Volume of cylinder is " << volume << endl;
	
    cout << endl << endl;
    basic();
}

void details() 
{
	string name, surname, prog;
	double x, y, z, sum, ave, prod;
	
	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your surname: ";
	cin >> surname;
	cout << "Enter your programme: ";
	cin >> prog;
	cout << endl;
	
	cout << "Enter 3 numbers: " << endl;
	cin >> x >> y >> z;
	cout << endl;
	
	sum = x+y+z;
	ave = sum/3;
	prod = x*y*z;
	
	cout << "Name: " << name << endl;
	cout << "Surname: " << surname << endl;
	cout << "Programme: " << prog << endl;
	cout << "Sum: " << sum << endl;
	cout << "Average: " << ave << endl;
	cout << "Product: " << prod;
	 
    cout << endl << endl;
    basic();
}

//definition of list of questions for decision making.
void basic()
{
	int num; 
	cout << "Choose the program you want to run\n\n";
	cout << "1. Area and perimeter of circle" << endl;
	cout << "2. Convert to Celsius and Fahrenheit" << endl;
	cout << "3. Interest and accruals on loan" << endl;	
	cout << "4. Total price and VAT" << endl;
	cout << "5. Sales representative monthly earnings" << endl;
	cout << "6. Payroll system for company" << endl;
	cout << "7. Cylinder volume" << endl;
	cout << "8. Student details" << endl;	
	cout << "9. Return to main menu" << endl << endl;
	cin >> num;
	cout << endl;
	//Selection of chosen option.
	switch(num)
	{
		case 1:
			aap();
			break;
		case 2:
			conv();
			break;
		case 3:
			iaa();
			break;
		case 4:
			retail();
			break;
		case 5:
			srep();
			break;
		case 6:
			payroll();
			break;
		case 7:
			cylinder();
			break;
		case 8:
			details();
			break;
		case 9:
			main_menu();
			break;
		default:
			cout << "Wrong Input, ";
			basic();
	}
}



/************DECISION MAKING****************/
void dec_making();
//definitions of questions in decision making. 
void amg() 
{
	double assign1, assign2, sum, avg;
	
	cout << "Enter the assignment 1 marks: \n";
	cin >> assign1;
	cout << "Enter assignment 2 marks: \n";
	cin >> assign2;
	
	cout << endl;
	
	sum=assign1+assign2;
	avg=sum/2;
	
	cout << "Average is "<< avg << endl; 
	if(avg<50)
	{
	    cout<<"FAIL";
    }
	else
    {
	    cout<<"PASS";
    }
    cout << endl << endl;
    dec_making();
}

void eoq() 
{
	double assign1, assign2, sum, avg;
	
	cout << "Enter the assign1 mark here: \n";
	cin >> assign1;
	cout << "Enter the assign2 mark here: \n";
	cin >> assign2;
	sum = assign1+assign2;
	avg = sum/2;
	cout <<endl;
	cout << "The average is " << avg << endl; 
	
	if(avg<50)
	{
		cout << "FAIL \n";
	}
	else if(avg>=50 && avg<=60)
	{
		cout << "PASS \n";
	}
	else if(avg>=61 && avg<=70)
	{
		cout << "CREDIT \n";
	}
	else if(avg>=71 && avg<=80)
	{
		cout << "MERIT \n";
	}
	else if(avg>80 && avg<=100)
	{
		cout << "DISTINCTION \n";
	}
	else
	{
		cout << "Invalid Grade";
	}	
	cout << endl << endl;
    dec_making();
}

void src() 
{
	double comm;
	double sales;
	
	cout<<"Enter the sales here: \n";
	cin>>sales;
	cout<<endl;
	
	if(sales<0)
	{
		cout<<"Invalid sales figure. ";
		src();
	}
	else if (sales>=0 && sales<100)
	{
		comm=0.03*sales;
		cout<<"The appropriate commission is "<<comm<<endl;
	}
	else if(sales>=100 && sales<=200)
	{
		comm=0.05*sales;
		cout<<" The appropriate commission is "<<comm<<endl;
	}
	else if(sales>200 && sales<=500)
	{
		comm=0.07*sales;
		cout<<"The appropriate commission is "<<comm<<endl;
	}
	else
	{
		comm=0.10*sales;
		cout<<"The appropriate commission is "<<comm<<endl;
	}
	cout << endl << endl;
    dec_making();
}

void eoo() 
{
	int num;
	
	cout<<"Enter the integer number here \n";
	cin>>num;
	
	if(num%2==0)
	{
		cout<<"THE NUMBER ENTERED IS EVEN \n";
	}
    else
	{
		cout<<"THE NUMBER ENTERED IS ODD \n";
	}
	cout << endl << endl;
    dec_making();
}

void ewp() 
{
	double num_hours, hourly_wage, weekly_pay, overtime;
	cout<<"Enter number of hours worked in a week" << endl;
	cin>>num_hours;
	cout<<"Enter your hourly wage" << endl;
	cin>>hourly_wage;
		
    overtime = num_hours - 40;
    if (overtime>0)
    {
    weekly_pay = (40 * hourly_wage) + (overtime * (hourly_wage*1.5));
	cout << "Weekly pay is " << weekly_pay;
	}
	else
	{
	weekly_pay = (num_hours * hourly_wage);
	cout << "Weekly pay is " << weekly_pay;	
	}
	cout << endl << endl;
    dec_making();	
}

void calc() 
{
	int num1, num2, ans, choice;
	
	cout << "Enter first number \n";
	cin >> num1;
	cout << "Enter second number \n";
	cin >> num2;
	cout << endl;
	
	CHOOSE: cout << "Choose Operator:"<<endl;
	cout << "1: Add\n";
	cout << "2: Sub\n";
	cout << "3: Divide\n";
	cout << "4: Multiply\n";
	cout << "5: Modulus\n\n";
	cin >> choice;
	cout << endl;
	
	
	switch(choice)
	{
		case 1: ans=num1 + num2;
		break;
		
		case 2: ans=num1 - num2;
		break;
		
		case 3: ans=num1 / num2;
		break;
		
		case 4: ans=num1 * num2;
		break;
		
		case 5: ans=num1 % num2;
		break;
		
		default:
			cout << "Invalid input. ";
			goto CHOOSE;
	}
	cout << endl;
	
	cout << "The result = "<<ans<<endl;
	cout << endl << endl;
    dec_making();
}

void cm() 
{
	int m;
	CHOOSE: cout << "Enter any number between 1 and 12 inclusively:" << endl;
	cin >> m;
	cout << endl;
	switch(m)
	{
		case 1:cout << "January";
		break;
		case 2:cout << "February";
		break;
		case 3:cout << "March";
		break;
		case 4:cout << "April";
		break;
		case 5:cout << "May";
		break;
		case 6:cout << "June";
		break;
		case 7:cout << "July";
		break;
		case 8:cout << "August";
		break;
		case 9:cout << "September";
		break;
		case 10:cout << "October";
		break;
		case 11:cout << "November";
		break;
		case 12:cout << "December";
		break;
		default:
			cout << "Invalid input, ";
			goto CHOOSE;
	}
	cout << endl <<endl;
	dec_making();
}

void mf()
{
	int age;
	ENTER: cout << "Enter age:" << endl;
	cin >> age;
	cout << endl;
	
	if(age>0 && age<18)
	{
		cout << "The fee is $1";
	}
	else if(age>=18	&&	age<50) 
	{
		cout << "The fee is $2";
	}
	else if(age>=50)
	{
		cout << "The fee is $0.50";
	}
	else
	{
		cout << "Invalid age. ";
		goto ENTER; 
	}
	cout << endl << endl;
    dec_making();
}

void daaf() 
{
	double total, ap, dis;
	string type;
	
	cout << "Enter the type of customer:" << endl;
	cin >> type;
	cout << "Enter total price:" << endl;
	cin	>> total;
	cout << endl;
	
	if(type=="domestic"	&&	total<100)
	{
		dis=total*0;
		cout<<"The discount is: "<<dis<<endl;
		ap=total-dis;
		cout<<"The actual price is: "<<ap;
	}
	else if(type=="domestic" && (total>=100 && total<=200))
	{
		dis=total*0.05; 
		cout<<"The discount is: "<<dis<<endl;
		ap=total-dis;
		cout<<"The actual price is: "<<ap;
	}
	else if(type=="domestic" && (total>=201 && total<=500))
	{
		dis=total*0.07; 
		cout<<"The discount is: "<<dis<<endl;
		ap=total-dis;
		cout<<"The actual price is: "<<ap;
	}
	else if(type=="domestic" && total>500)
	{
		dis=total*0.1; 
		cout<<"The discount is: "<<dis<<endl;
		ap=total-dis;
		cout<<"The actual price is: "<<ap;
	}
	else if(type=="foreign" && total<100)
	{
		dis=total*0; 
		cout<<"The discount is: "<<dis<<endl;
		ap=total-dis;
		cout<<"The actual price is: "<<ap;
	}
	else if(type=="foreign" && (total>=100 && total<=200))
	{
		dis=total*0.06; 
		cout<<"The discount is: "<<dis<<endl;
		ap=total-dis;
		cout<<"The actual price is: "<<ap;
	}
	else if(type=="foreign" && (total>=201 && total<=500))
	{
		dis=total*0.08; 
		cout<<"The discount is: "<<dis<<endl;
		ap=total-dis;
		cout<<"The actual price is: "<<ap;
	}
	else if(type=="foreign" && total>500)
	{
		dis=total*0.12; 
		cout<<"The discount is: "<<dis<<endl;
		ap=total-dis;
		cout<<"The actual price is: "<<ap;}
	else if((type!="foreign"||"domestic") or total<0)
	{
		cout << "Either the type of customer or amount is invalid";
	}
	cout << endl << endl;
    dec_making();
}

void pon() 
{
	int num;
	cout << "Enter any number:" << endl; 
	cin >> num;
	cout << endl;
	
	if(num>0 && num<10)
	{
		cout << "The number is positive but less than 10.";
	}
	else if(num>10)
	{
		cout << "The number is positive and greater than 10.";
	}
	else
	{
		cout << "The number is negative.";
	}
	cout << endl << endl;
    dec_making();
}

//definition of list of questions for decision making.
void dec_making()
{
	int num; 
	cout << "Choose the program you want to run\n\n";
	cout << "1. Average mark and grade" << endl;
	cout << "2. Extension of question 1" << endl;
	cout << "3. Sale's representative commission'" << endl;	
	cout << "4. Even or odd" << endl;
	cout << "5. Employee weekly pay" << endl;
	cout << "6. Calculator" << endl;
	cout << "7. Corresponding month" << endl;
	cout << "8. Museum fee" << endl;	
	cout << "9. Discount and actual fee" << endl;
	cout << "10. Positive or negative" << endl;
	cout << "11. Return to main menu" << endl << endl;
	cin >> num;
	cout << endl;
	//Selection of chosen option.
	switch(num)
	{
		case 1:
			amg();
			break;
		case 2:
			eoq();
			break;
		case 3:
			src();
			break;
		case 4:
			eoo();
			break;
		case 5:
			ewp();
			break;
		case 6:
			calc();
			break;
		case 7:
			cm();
			break;
		case 8:
			mf();
			break;
		case 9:
			daaf();
			break;
		case 10:
			pon();
			break;
		case 11:
			main_menu();
			break;
		default:
			cout << "Wrong Input, ";
			dec_making();
	}
}



/***************LOOPING**************/
void loop();
//definition of questions for looping.
void loop_fact() {
	unsigned int num, og, x;
	cout << "Enter number: " << endl;
	cin >> num;
	og = num;
	
	for (x=og-1; x > 0; x--)
	{
		num = num * x;
	}
	
	cout << og << "! is " << num;
	cout << endl << endl;
    loop();
}

void bv() {
	int num, num1, result, x;
	
	cout << "Enter 10 integers: " << endl;
	
	for (x=1; x<=10; x++)
	{
		if (x == 1)
		{
			cin >> num;
		}
		else
		{
			cin >> num1;
			result = max(num,num1);
			num = result;
		}		
	}
	cout << endl << "Maximum is " << num << endl;
	cout << endl << endl;
    loop();
}

void saa() {
	int sum, count, x=1;
	double avg;
	
	sum = 0;
	count = 0;
	
	while(x<500){
		sum += x;
		x+=2;
		count++;
	}
	
	avg = sum / count;
	cout<<"Sum is "<<sum << endl;
	cout<<"Average is "<<avg;
	cout << endl << endl;
    loop();
}

void gn() {
	int actual, guess;
	actual = 10;
	
	cout << "Guess the number: " << endl;
	
	while (guess != actual)
	{
		cin >> guess;
		cout << endl;
		if (guess>actual)
		{
			cout << "Your number is bigger. Try again." << endl;
		}
		else
		{
			cout << "Your number is smaller. Try again." << endl;
		}
	}
    if (guess==actual)
    {
        cout << "Number is correct."<<endl;
    }

	cout << endl << endl;
    loop();
}

void nn() {
	int num, initial;
	cout << "Input the number limit you want: \n";
	initial = 1;
	cin >> num;
	cout << endl;
	
	do{
		cout << initial << endl;
		initial++;
	}
	while(initial <= num);
	cout << endl << endl;
    loop();
}

void sutt() {
	int x = 1;
	do{
		cout<< x <<" * "<< x << " = " << x*x <<endl;
		x++;
	}
	while(x<11);
	cout << endl << endl;
    loop();
}

void nems() {
	int x;
	for(x=0; x<=100; x++)
	{
		if (x%7 != 0)
		{
			cout << x << endl;
		}
	}
	cout << endl << endl;
    loop();
}

void rowd() {
	int m;
	
	cout<<"Input a positive number:\n";
	cin>>m;
	cout<<endl;
	
	if(m<0)
	{
		cout << "Number should not be negative. ";
		rowd();
	}
	
	do{
		cout << m << endl;
		m = m-2;
	}
	while(m>=0);
	
	cout << endl << endl;
    loop();
}

void mt() {
	double num;
	cout << "Enter number for which you want the table:\n";
	cin >> num;
	cout << endl;
	
	for(int i=1; i<=10; i++)
	{
		cout << num << "*" << i << " = " << num*i << '\n'; 	
	}
	
	cout << endl << endl;
    loop();
}

void tcofp() {
	string currency;
	double sum = 0, cost;
	
	cout << "Enter currency symbol: ";
	cin >> currency;
	cout << endl;
	cout << "Enter the prices for the products:\n\n";
	
	for(int i=1; i<=5; i++)
	{
		cout << "Product " << i << ": " << currency;
		cin >> cost;
		sum += cost;
	}
	cout << endl;
	cout << "Total paid by customer is " << currency << sum << ".";
	
	cout << endl << endl;
    loop();
}

void enn() {
	int num, sum = 0;
	cout << "Input number of terms: ";
	cin >> num;
	cout << endl;
	
	if(num<=0)
		{
			cout << "Invalid input. ";
			enn();
		}
	else
	{
		cout << "The even numbers are: ";
		for(int i=1; i<=num; i++)
		{
			cout << i*2 << " ";
			sum += i*2;	
		}
	}
	cout << endl;
	cout << "The sum of even natural numbers up to " << num << " terms: " << sum;
	
	cout << endl << endl;
    loop();
}

void onn() {
	int num, sum = 0;
	cout << "Input number of terms: ";
	cin >> num;
	cout << endl;
	
	if(num<=0)
		{
			cout << "Invalid input. ";
			onn();
		}
	else
	{
		cout << "The odd numbers are: ";
		for(int i=1; i<=num; i++)
		{
			cout << (i*2)-1 << " ";
			sum += (i*2)-1;	
		}
	}
	cout << endl;
	cout << "The sum of odd natural numbers up to " << num << " terms: " << sum;
	
	cout << endl << endl;
    loop();
}

void coan() {
	int num;
	cout << "Input number of terms: " << endl;
	cin >> num;
	cout << endl;
	
	for(int i=1; i<=num; i++)
	{
		cout << "Number is: " << i << " and the cube of " << i << " is: " << i*i*i << endl;
	}
	
	cout << endl << endl;
    loop();
}

void dbn() {
	int sum = 0;
	
	cout << "Numbers between 100 and 200, divisible by 9: " << endl;
	for(int i=100; i<200; i++)
	{
		if(i%9==0)
		{
			cout << i << " ";
			sum += i;	
		}	
	}
	cout << endl << endl;
	cout << "The sum: " << sum;
	
	cout << endl << endl;
    loop();
}

//definition of list of questions for looping.
void loop()
{
	int num;
	cout << "Choose the program you want to run\n\n";
	cout << "1. Factorial" << endl;
	cout << "2. Biggest value" << endl;
	cout << "3. Sum and average of odd integers" << endl;	
	cout << "4. Guess number" << endl;
	cout << "5. Natural numbers" << endl;
	cout << "6. Squares up to 10" << endl;
	cout << "7. Numbers except multiples of 7" << endl;
	cout << "8. Reverse order with difference of 2" << endl;	
	cout << "9. Multiplication table" << endl;
	cout << "10. Total cost of 5 products" << endl;
	cout << "11. Even natural numbers" << endl;
	cout << "12. Odd natural numbers" << endl;	
	cout << "13. Cube of a number" << endl;
	cout << "14. Divisible by 9" << endl;
	cout << "15. Return to main menu" << endl << endl;
	cin >> num;
	cout << endl;
	//selection of chosen question.
	switch(num)
	{
		case 1:
			loop_fact();
			break;
		case 2:
			bv();
			break;
		case 3:
			saa();
			break;
		case 4:
			gn();
			break;
		case 5:
			nn();
			break;
		case 6:
			sutt();
			break;
		case 7:
			nems();
			break;
		case 8:
			rowd();
			break;
		case 9:
			mt();
			break;
		case 10:
			tcofp();
			break;
		case 11:
			enn();
			break;
		case 12:
			onn();
			break;
		case 13:
			coan();
			break;
		case 14:
			dbn();
			break;
		case 15:
			main_menu();
			break;
		default:
			cout << "Wrong Input, ";
			loop();
	}
}



/***************ARRAYS*************/
void arr();
//definition of questions for arrays.
void ahl() {
	double mark[5];
	double highest;
	double lowest;
	double average;
	double sum = 0;
	
	cout << "Enter the marks for the 5 students: " << endl;	
	for(int i=0; i<5; i++)
	{
		cout << "Student " << i+1 << ": ";
		cin >> mark[i];	
		sum += mark[i];
	}
	average = sum/5;
	cout << endl << endl;
	
	highest = lowest = mark[0];
	for(int i=0; i<5; i++)
	{
		highest = max(highest, mark[i]);

		lowest = min(lowest, mark[i]);
	}
	
	cout << "Average mark is " << average << endl;
	cout << "Highest mark is " << highest << endl;
	cout << "Lowest mark is " << lowest << endl;
	cout << endl <<endl;
	arr();
}

void aom() {
	int a, b, i, j;
		
	cout << "Enter the order of matrix A:" << endl;
	cout << "Number of rows: ";
	cin >> a;
	cout << "Number of columns: ";
	cin >> b;
	int mat1[a][b];
	
	cout << endl;
	
	//captures error of negative number of rows or columns in matrix A
	if(a<0 || b<0)
	{
		cout << "Rows and columns should not be negative. Try again" << endl << endl;
		aom();
	}
	else
	{
		cout << "Enter the elements of your matrix: " << endl;
		for(i=0; i<a; i++)
		{
			for(j=0; j<b; j++)
			{
				cin >> mat1[i][j];	
			}
		}
 	}
	cout << endl;
	
	
	int c, d;
	
	RETRY: cout << "Enter the order of matrix B:" << endl;
	cout << "Number of rows: ";
	cin >> c;
	cout << "Number of columns: ";
	cin >> d;
	int mat2[c][d];
	
	cout << endl;
	
	//captures error of different-ordered matrices
	if(a!=c || b!=d)
	{
		cout << "Error: Matrice of different order cannot be added. Try again." << endl;
		goto RETRY;
	}
	
	//captures error of negative number of rows or columns in matrix B
	if(c<0 || d<0)
	{
		cout << "Rows and columns should not be negative. Try again." << endl;
		aom();
	}
	else
	{
		cout << "Enter the elements of your matrix: " << endl;
		for(i=0; i<c; i++)
		{
			for(j=0; j<d; j++)
			{	
				cin >> mat2[i][j];
			}
		}
	}
	cout << endl;
	
	//addition of matrices
	int sum[a][b];
	for(i=0; i<c; i++)
	{
		for(j=0; j<d; j++)
		{	
			sum[i][j] = mat1[i][j]+ mat2[i][j];
		}
	}
	
	//display of final matrix
	cout << "Sum of matrices is\n\n";
	for(i=0; i<c; i++)
	{
		for(j=0; j<d; j++)
		{	
			cout << " " << sum[i][j];
			//displays matrix in actual preview
			if(j==d-1)
				cout << endl;
		}
	}
	cout << endl <<endl;
	arr();
}

void mom() {
	int a, i, order, prod = 0;
	
	cout << "How many elements do your matrices have: ";
	cin >> a;
	cout << endl;
	
	int mat1[a], mat2[a], mult[a][a];
	
	//captures error of negative number of rows or columns in matrices
	if(a<0)
	{
		cout << "Rows and columns should not be negative." << endl << endl;
		arr();
	}
	else
	{
		cout << "Enter the elements of your first matrix: " << endl;
		for(i=0; i<a; i++)
		{
			cin >> mat1[i];	
		}
 		cout << endl;
	
		cout << "Enter the elements of your second matrix: " << endl;
		for(i=0; i<a; i++)
		{	
			cin >> mat2[i];
		}
		cout << endl;
	}
	
	
	cout << "What is the order of your matrices:\n";
	cout << "1. First matrix = 1x" << a << " and second matrix = " << a << "x1.\n";
	cout << "2. First matrix = " << a << "x1 and second matrix = 1x" << a << ".\n\n";
	
	cin >> order;
	cout << endl;
	
	// multiplication of matrice
	if(order==1)
	{
		for(i=0; i<a; i++)
		{
			prod += mat1[i] * mat2[i];
		}
		cout << "(" << prod << ")";
	}
	else if(order==2)
	{
		for(i=0; i<a; i++)
		{	
			for(int j=0; j<a; j++)
			{
				mult[i][j] = mat1[i] * mat2[j];
				cout << " " << mult[i][j];
				//displays matrix in actual preview
				if(j==a-1)
					cout << endl;
			}
		}
	}
	else
	{
		cout << "Invalid input. Try Again.";
	}
	cout << endl << endl;
	arr();
}

void login_arr() {
	int choice;
    string names, code;
	string usernames[3] = {"HCT113", "C++", "PROGRAMMING"};
	string password[3] = {"2019", "SLT450", "ARRAYS"};
	
	cout << "Choose one of the options below.\n\n";
	cout << "1. Login\n";
	cout << "2. Exit\n\n";
	cin >> choice;
	cout << endl;
	
	switch (choice)
	{
		case 1:
			cout << "Enter username: ";
			cin >> names;;
			cout << "Enter password: ";
			cin >> code;
			cout << endl;
			
			for(int i=0; i<3; i++)
			{
				for(int j=0; j<3; j++)
				{
					if(names != usernames[i] || code != password[j])
					{
						if(i==2)
						{
							cout << "Your username or password is wrong. ";
							login_arr();
						}
						else
						{
							continue;
						}
					}
					else
					{
						cout << "Hello.\n"; 
						cout << "Welcome to programming in C++\n";
						cout << "Goodbye.\n\n";
						login_arr();	
					}
				}
			}
			break;
		case 2:
			arr();
			break;
		default:
			cout << "Wrong input. ";
			login_arr();
	}
	
	cout << endl <<endl;
	arr();
}

void saado(){
	int excl;
	cout << "Original array is: {2,5,3,7,9,6}" << endl << endl;
	
	int array[6] = {2,5,3,7,9,6};
	
	//code for sorting in ascending order
	for(int i=0; i<6; i++)
	{
		for(int j=i+1; j<6; j++)
		{
			if(array[i] > array[j])
			{
				excl = array[i];
				array[i] = array[j];
				array[j] = excl;	
			}
		}
	}
	
	//prints out array in ascending order
	cout << "Array in ascending order is: \n\n";
	for(int k=0; k<6; k++)
	{
		cout << array[k] << " "	;
	}
	cout << endl << endl;
	
	//code for sorting in descending order
	for(int i=0; i<6; i++)
	{
		for(int j=i+1; j<6; j++)
		{
			if(array[i] < array[j])
			{
				excl = array[i];
				array[i] = array[j];
				array[j] = excl;	
			}
		}
	}
	
	//prints out the array in descending order
	cout << "Array in descending order is: \n\n";
	for(int k=0; k<6; k++)
	{
		cout << array[k] << " "	;
	}
	cout << endl << endl;
	arr();
}

void iaado() {
	iaado_main();//found in array6.cpp
	cout << endl <<endl;
	arr();
}

//definition of list of questions for arrays.
void arr()
{
	int num;
	cout << "Choose the program you want to run:\n\n";
	cout << "1. Average, highest and lowest" << endl;
	cout << "2. Addition of matrices" << endl;
	cout << "3. Multiplication of matrices" << endl;	
	cout << "4. Login" << endl;
	cout << "5. Sort in ascending and descending order" << endl;
	cout << "6. Input, Ascending and Descending order" << endl;
	cout << "7. Return to main menu" << endl << endl;
	cin >> num;
	cout << endl;
	//selection of chosen question.
	switch(num)
	{
		case 1:
			ahl();
			break;
		case 2:
			aom();
			break;
		case 3:
			mom();
			break;
		case 4:
			login_arr();
			break;
		case 5:
			saado();
			break;
		case 6:
			iaado();
			break;
		case 7:
			main_menu();
			break;
		default:
			cout << "Wrong Input, ";
			arr();
	}

}



/**************FUNCTIONS*************/
void func();
//definition questions for functions.
void bcalc() {
	bcalc_main(); //found in function1.cpp
	cout << endl << endl;
    func();
}

void aglm() {
	aglm_main(); //found in function2.cpp
	cout << endl << endl;
    func();
}

void fact_func() {
	fact_func_main();//found in function3.cpp
	cout << endl << endl;
    func();
}

void aos() {
	aos_main();//found in function4.cpp
	cout << endl << endl;
    func();
}

void login_func() {
	login_func_main();//found in function5.cpp
	cout << endl << endl;
    func();
}

void cop() {
	cop_main();//found in function6.cpp
	cout << endl << endl;
    func();
}

void leap() {
	leap_main();//found in function7.cpp
	cout << endl << endl;
    func();
}

void seq() {
	seq_main();//found in function8.cpp
	cout << endl << endl;
    func();
}

//definition of list of questions for functions.
void func()
{
	int num;
	cout << "Choose the program you want to run\n\n";
	cout << "1. Bonus calculation" << endl;
	cout << "2. Average, greatest and least mark" << endl;
	cout << "3. Factorial" << endl;	
	cout << "4. Area of shape" << endl;
	cout << "5. Login" << endl;
	cout << "6. Cost of pie" << endl;
	cout << "7. Leap year" << endl;
	cout << "8. Sequence" << endl;	
	cout << "9. Return to main menu" << endl << endl;
	cin >> num;
	cout << endl;
	//selection of chosen question.
	switch(num)
	{
		case 1:
			bcalc();
			break;
		case 2:
			aglm();
			break;
		case 3:
			fact_func();
			break;
		case 4:
			aos();
			break;
		case 5:
			login_func();
			break;
		case 6:
			cop();
			break;
		case 7:
			leap();
			break;
		case 8:
			seq();
			break;
		case 9:
			main_menu();
			break;
		default:
			cout << "Wrong Input, ";
			func();
	}
}



/*****************FILES****************/
void file();
//definition of questions for files.
void mls() {
	mini_lib();//found in files.cpp
	cout << endl << endl;
	file();
}


//definition of list of questions for files.
void file()
{
	int num;
	cout << "Choose the topic you want:" << endl << endl;
	cout << "1. Mini library system" << endl;
	cout << "2. Return to main menu" << endl << endl;
	cin >> num;
	cout << endl;
	//selection of chosen question.
	switch(num)
	{
		case 1:
			mls();
			file();
			break;
		case 2:
			main_menu();
			break;
		default:
			cout << "Wrong Input, ";
			file();
	}
		
}



/*****************OTHER****************/
void other();
//definition of questions for files.
void fib() {
	int x, y;
	cout << "Enter number of fibonnaci items:" << endl;
	cin >> x;
	cout << endl;
	
	int a, b, c;
	a = 0;
	b = 1;
	cout << a << " " << b;
	
	y = 2;
	while (y < x)
	{
		c = a+b;
		cout << " " << c;
		a = b;
		b = c;
		y++;
	}
	
	cout << endl << endl;
	other();
}

void prime() {
	int a;
	cout << "Enter limit of prime numbers:" << endl;
	cin >> a;
	cout << endl;
	
	cout << 2 << " ";
	for (int x=1; x<=a; x++)
	{
		for (int y=2; y<=a/2; y++) //factors of a do not exceed a/2
		{
			if(x%y==0)
			{ 
				break;	
			}
			else if(x%y!=0 and x!=1)
	;		{
				cout << x << " ";
				break;	
			}		
		}	;
	}
	
	cout << endl << endl;
	other();
}

void quad() {
	double a, b, c;
	//entering values of the coefficients
	cout << "Given your quadratic equation in the form 'ax^2 + bx + c':"<<endl;
	cout << "what is value of coefficient a: ";
	cin >> a;
	cout << "what is value of coefficient b: ";
	cin >> b;
	cout << "what is value of constant c: ";
	cin >> c;
	cout << endl;
	
	//calculation of discriminant to determine number of roots
	double disc;
	disc = (b*b) - (4*a*c);
	
	float x1, x2;
	if (disc > 0) //there are two roots if greater than 0
	{
		x1 = (-b + sqrt(disc)) / (2*a);
		x2 = (-b - sqrt(disc)) / (2*a);
		cout << "Roots are " << endl;
		cout << "x1: " << x1 << endl;
		cout << "x2: " << x2;
	}
	else if (disc==0) //there is one root
	{
		x1 = -b / (2*a);
		cout << "The root is" << endl;
		cout << "x1: " << x1;
	}
	else //has no real roots
	{
		cout << "Equation has no real roots.";
	}
	
	cout << endl << endl;
	other();
}


//definition of list of questions for files.
void other()
{
	int num;
	cout << "Choose the topic you want:" << endl << endl;
	cout << "1. Fibbonacci series up to n" << endl;
	cout << "2. Prime numbers up to n" << endl;
	cout << "3. Solution to quadratic equation" << endl;
	cout << "4. Return to main menu" << endl << endl;
	cin >> num;
	cout << endl;
	//selection of chosen question.
	switch(num)
	{
		case 1:
			fib();
			break;
		case 2:
			prime();
			break;
		case 3:
			quad();
			break;
		case 4:
			main_menu();
			break;
		default:
			cout << "Wrong Input, ";
			other();
	}
		
}




/********************MAIN MENU************************/
void main_menu()
{
	int option;
	cout << "________MAIN MENU________" << endl;
	cout << "Choose the topic you want:" << endl << endl;
	cout << "1. Basic" << endl;
	cout << "2. Decision making" << endl;
	cout << "3. Loops" << endl;
	cout << "4. Arrays" << endl;	
	cout << "5. Functions" << endl;
	cout << "6. Files" << endl;
	cout << "7. Other codes" << endl;
	cout << "8. Return to login" << endl << endl;
	cin >> option;
	cout << endl;
	switch(option)
	{
		case 1:
			basic();
			break;
		case 2:
			dec_making();
			break;
		case 3:
			loop();
			break;
		case 4:
			arr();
			break;
		case 5:
			func();
			break;
		case 6:
			file();
			break;
		case 7:
			other();
			break;
		case 8:
			login();
			break;
		default:
			cout << "Try Again\n\n";
			main_menu();
			
	}
}


/****************LOGIN****************/
void login()
{
	int num;
	cout << "____LOGIN____" << endl;
	cout << "Select Option:" << endl << endl;
	cout << "1. Open Main Menu" << endl;
	cout << "2. Exit" << endl << endl;
	cin >> num;
	cout << endl;
	if(num == 1)
	{
		main_menu();
	}
	else if(num == 2)
	{
		exit(0);
	}
	else
	{
		cout << "Wrong Input, Try Again!" << endl;
		login();
	}
}


int main() 
{
    login();
    return 0;
}
