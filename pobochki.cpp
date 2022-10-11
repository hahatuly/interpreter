#include "pobochki.h"
#include "ravno.h"
#include "inykcia.h"

void pobochki::vivod(string xx, int ik)
{
	int x;
	int n = xx.length();
	if (xx[0] == 'p' && xx[1] == 'o' && xx[2] == 'b' && xx[3] == 'o' && xx[4] == 'c' && xx[5] == 'h' && xx[6] == 'k' && xx[7] == 'i' && xx[8] == '(' && xx[n - 2] == ')' && xx[n - 1] == ';')
	{
		cout << " Вывод: ";
		if (xx[9] == 'x')
		{
			cout << inykcia::s << endl;
		}
		if (xx[9] == 'v')
		{
			cout << ravno::otvet << endl;
		}
	}
    else if (xx[0] == 'p' && xx[1] == 'o' && xx[2] == 'b' && xx[3] == 'o' && xx[4] == 'c' && xx[5] == 'h' && xx[6] == 'k' && xx[7] == 'i' && xx[8] == '(' && xx[9] == '"' && xx[n - 3] == '"' && xx[n - 2] == ')' && xx[n - 1] == ';')
	{
		for (int l = 10; l < n - 3; l++)
		{
			cout << xx[l];
		}
	}
	else 
	{
		cout << "в " << ik + 1 << " строчке неизвестный символ "<< endl;
	}

}
