#include <iostream>
#include <time.h>
#include <conio.h>

using namespace std;

int main()
{
	unsigned const int i = 10;
	int tab[i];
 
	srand((unsigned)time(NULL));
	cout << "Liczby przed sortowaniem: ";


	for (unsigned int k = 0; k < i; k++)
	{

		tab[k] = rand();
		if (tab[k] == 0)
		{
			do
			{

				tab[k] = rand();
				cout << tab[k]<<" ";
			} while (tab[k] != 0);
		}

		else
			cout << tab[k]<<" ";
	}

	cout << endl;
	cout << endl;
	cout << "============" << endl;
	cout << endl;

	cout << "Liczby po sortowaniu: ";
	 
	for(unsigned int q=1; q<i;q++)
	{ 
		for (  int p = 0; p < i-1 ; p++)
		{

			if (tab[p] > tab[p + 1])
			{
				int save;
				save = tab[p + 1];
				tab[p + 1] = tab[p];
				tab[p] = save;
				 
			}
			
		}
		
	}
	for (unsigned int k = 0;k<i; k++)
	{
		cout << tab[k] << " ";
	}


	_getch();
}