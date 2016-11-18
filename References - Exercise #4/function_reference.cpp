#include <conio.h>
#include <iostream>
using namespace std;

float a, b, c,  x0, x1, x2;
int inf;


void  rozwiazania(float a, float b, float c,float &x0,float &x1,float &x2, int &inf )
{
	if (a == 0)
	{
		x0 = -c / b;
		inf = 1;
	}
		
		else
		{

		  float delta = b *b - 4 * a*c;
	
			if (delta > 0)
			{
				inf = 2;
			}
				if (delta < 0)
				{
					inf = 0;
				}
					if (delta == 0)
					{
						inf = 1;
					}
	
	x1 = (-b - sqrt((b*b) - 4 * (a*c))) / (2 * a);
	x2 = (-b + sqrt((b*b)-4*(a*c))) / (2 * a);
	x0 = -b / 2 * a;
		}

	
	
}


int main()
{
	 
	cout << "Podaj wartosci: " << endl;
	cout << "A = "; cin >> a;
	cout << "B = "; cin >> b;
	cout << "C = "; cin >> c;

	inf = 0;
	x0 = 0;
	x1 = 0;
	x2 = 0;
 

	rozwiazania(a, b, c, x0, x1, x2, inf );

	cout << endl;
	cout << "Rozwiaznia: " << endl;
	cout << "=======================" << endl;
	  cout << "Ilosc rozwiazan : " << inf << endl;
	cout << "=======================" << endl;


	switch(inf)
	{ 
			case 0:
			{
				cout << "Rownanie nie ma rozwiazan!" << endl;
				break;
			}
				case 1:
				{
					cout << "X0 = " << x0;
					break;
				}

					case 2:
					{
						cout << "X1 = " << x1 << endl;
						cout << "X2 = " << x2;
						break;
					}
	
	}
	 
	_getch();

}