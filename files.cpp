# include <iostream>
# include <fstream>
using namespace std;


void mini_lib();
void record();

void save()
{
    char n;
    fstream lib, inf;

    lib.open("library", ios::in);
    inf.open("information.txt", ios::out);
    if(!lib || !inf)
    {
        cout << "Save of data to file 'information.txt' unsuccessful.\n\n";
        mini_lib();
    }
    else
    {
        while(!lib.eof())
        {
            lib >> noskipws >> n;
            inf << n;
        }
        cout << "Save of data to file 'information.txt' successful.\n\n";
    }
    inf.close();
    lib.close();
}

void count(){
    int x = 0;
    string data;
    fstream file;

    file.open("library",ios::in);

    while(!file.eof())
    {
        file >> data;
        if(data=="RECORD")
        {
            x++;
        }
    }
    cout << "Number of books borrowed is: " << x << endl << endl;
}

void edit()
{
	fstream file;
	file.open("library", ios::in);
	if(!file)
	{
		cout << "No previous record exists\n\n";
		mini_lib();
	}
	else
	{
		record();
	}
}

void create()
{
	fstream file;

    file.open("library", ios::out);
    if(!file)
    {
    	cout << "File creation failed.\n\n";
	}
    else
	{
		cout << "File creation successful.\n\n";
	}
    file.close();
    
    record();
}

void record()
{
	fstream file;
	
	file.open("library", ios::app);
    if(!file)
    {
    	cout << "File opening not successful\n\n";
	}
    else
	{
	 	string data; 
		long long int num;
		
		cout << "__Enter Student Information__" << endl <<endl;
		file << "================== RECORD =================="<<endl;
		file << "*****Student details*****\n";
		file << "Name:" << "\t\t\t";
		cout << "Name: ";
		cin >> data;
		file << data << endl;
		file << "Surname:" << "\t\t\t";
		cout << "Surname: ";
		cin >> data;
		file << data << endl;
		file << "Registration Number:" << "\t";
		cout << "Registration Number: ";
		cin >> data;
		file << data << endl;
		file << "Age:" << "\t\t\t";
		cout << "Age: ";
		cin >> num;
		file << num << endl;
		file << "Year:" << "\t\t\t";
		cout << "Year: ";
		cin >> num;
		file << num << endl << endl;
		cout << endl << endl;
		
		cout << "__Enter Book Details__" << endl << endl;
		file << "*****Book details*****\n";
		file << "Book Name:" << "\t\t";
		cout << "Book Name: ";
		cin >> data;
		file << data << endl;
		file << "Serial number:" << "\t\t";
		cout << "Serial number: ";
		cin >> num;
		file << num << endl;
		file << "Title:" << "\t\t\t";
		cout << "Title: ";
		cin >> data;
		file << data << endl;
		file << "Day borrowed:" << "\t\t";
		cout << "Day borrowed(dd/mm/yy): ";
		cin >> data;
		file << data << endl;
		file << "Day returned:" << "\t\t";
		cout << "Day returned(dd/mm/yy): ";
		cin >> data;
		file << data << endl;
		cout << endl << endl;
		
		file << endl;
	}
	file.close();
	save();
	count();
	mini_lib();
}


void mini_lib()
{
    int choice;
    cout << "Choose one of the following options:\n\n";
    cout << "1. Edit existing record.\n";
    cout << "2. Create new record.\n";
    cout << "3. Exit.\n\n";
    cin >> choice;
    cout << endl;

    switch(choice)
    {
        case 1:
            edit();
            break;
        case 2:
            create();
            break;
        case 3:
            break;
        default:
            mini_lib();
    }
}
