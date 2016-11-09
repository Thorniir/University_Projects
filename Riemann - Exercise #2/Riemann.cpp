#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int main()
{
	double suma = 0, old = 1; 
	int potega;
	cout.precision(20);
 

	cout << "Podaj potege: ";
	cin >> potega;
	for (int i = 1; i < 1000; i++)
	{
		suma +=  (1 / pow(double(i), potega));
	}
	cout << "Petla for: " << suma << endl;

	 
	suma = 0; 
	
	double exp = 0.000000001;
	int b = 1;
	double z = 0;
	do
	{
		z = (1 / pow(double(b), potega));
		suma += z;
		b++;
	} while (z > exp);
	cout << "Petla do while: " << suma << endl;
	

	suma = 0;
	b = 1;
	while (suma != old)
	{
		old = suma;
		suma += (1 / pow(double(b), potega));
		b++;
	}
	cout << "Petla while: " << suma << endl;
	_getch();
	return 0;
}
