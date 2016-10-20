#include <iostream>
#include <conio.h>


using namespace std;

int main()
{
	for(;;)
	{ 
	int year;
	cout << "Podaj rok: "; cin >> year;
	// % 4 is 400 is 100 isnt
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		cout << "Rok jest przestepny" << endl;
	else cout << "Rok nie jest przestepny" << endl;
	
	}
	_getch();

	return 0;
}