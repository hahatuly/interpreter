#include "inykcia.h"
int x;
void inykcia::vvod(string xx, int ik)
{
	setlocale(LC_ALL, "Rus");
	int k=0;
	if (xx[0] == 'i' && xx[1] == 'n' && xx[2] == 'y' && xx[3] == 'k' && xx[4] == 'c' && xx[5] == 'i' && xx[6] == 'a' && xx[7] == '(' && xx[9] == ')' && xx[10] == ';')
	{
		cout << " ¬ведите число "<<endl;
		cin >> x;
		s = x;
	}
	else
	{
		cout << "в " << ik + 1 << " строчке неизвестный символ " << endl;
	}
}

int inykcia::s = x;