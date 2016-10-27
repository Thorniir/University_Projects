#include <iostream>
#include <conio.h>

using namespace std;
 

int main()
{
	cout.precision(15);

	double  suma=0 , old;
	int b = 1, potega;
		for(;;)
		{
			cout << "Podaj wartosc potegi: "; cin >> potega;
		cout << endl;
		suma = 0;
		b = 1;
	for (int n = 0; n < 1000; n++)
	{


	  double mianownik =  pow(b, potega);

		suma +=   1 / mianownik;

		b++;

	}
	cout << "Dla petli for: " << suma << endl;
 

	suma = 0;
	b = 1;	

	while (b < 10000)
	{
		 
		
		suma +=   1 / pow(b, potega);
		b++;
	}cout << "Dla petli while: " << suma << endl;
	
	
	

	suma = 0;
	b = 1;
	 
	do {

		old= suma;
	  	 
		suma +=   1 / pow(b, potega);
	
		b++;
 

	} while (suma!=old);
	cout << "Dla petli do while: " << suma;
	cout << endl;
	cout << endl;
		}
	
	

	_getch();
	return 0;
}