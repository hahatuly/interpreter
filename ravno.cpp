#include "ravno.h"

int ot = 0;

void ravno::virag(string xx, int ik)
{
	int kol = 0;
	int n = xx.length();
	int j = 4;
	int error = 0;
	if (xx[1] == '<' && xx[2] == '=' && xx[3] == '!' && xx[n-1]==';')
	{
		while (j < n) //проверка
		{

			
			if (xx[j] == '(' || xx[j] == ')' || xx[j] == '+' || xx[j] == '*' || xx[j] == '0' || xx[j] == '1' || xx[j] == '2' || xx[j] == '3' || xx[j] == '4' || xx[j] == '5' || xx[j] == '6' || xx[j] == '7' || xx[j] == '8' || xx[j] == '9' || xx[j] == 'x' || xx[j] == 'v' || xx[j] == ';' || xx[j] == '/' || xx[j] == '-')
			{
				if (xx[j] == '(')
				{
					kol++;
				}
				else if (xx[j] == ')')
				{
					kol--;
				}
			}
			else
			{
				cout << "в " << ik + 1 << " строчке неизвестный символ " << endl;
				error = 1;
			}

			if (xx[j] == '/' && xx[j + 1] == '0')
			{
				cout << "в " << ik + 1 << " деление на ноль " << endl;
				error = 1;
			}

			j++;
		}
		if (kol != 0)
		{
			cout << "в " << ik + 1 << " непарная скобка " << endl;
			error = 1;
		}
	}
	else
	{
		cout << "в " << ik + 1 << " строчке неизвестный символ " << endl;
		error = 1;
	}

	int i=n;
	int skob = 0;
	int c = 4;
	if (error != 1)
	{
		while (c<n-1)
		{
			if (xx[c]=='+' && xx[c+1]!='(' && xx[c+2]!='*')
			{
				ot += ((int)xx[c+1]-48); //48 - номер 0 в таблице ascii
			}
			if (xx[c] == '+' && xx[c + 2] == '*')
			{
				ot = ot + (((int)xx[c + 1]-48)*((int)xx[c+3]-48));
				c += 3;
			}
			if (xx[c]=='+' && xx[c+1]=='(')
			{
				c++;
				while (xx[c] != ')')
				{
					if (xx[c] == '+' && xx[c + 2] != '*')
					{
						skob += ((int)xx[c + 1]-48);
					}
					if (xx[c] == '+' && xx[c + 2] == '*')
					{
						skob = skob + (((int)xx[c + 1]-48) * ((int)xx[c + 3]-48));
						c += 3;
					}
					if (xx[c] == '*')
					{
						skob = skob + (((int)xx[c-1]-48) * ((int)xx[c+1])-48);
					}
					c++;
				}
				ot += skob;
			}
			if (xx[c] == '*' && xx[c + 1] == '(')
			{
				c++;
				while (xx[c] != ')')
				{
					if (xx[c] == '+' && xx[c + 2] != '*')
					{
						skob += ((int)xx[c + 1]-48);
					}
					if (xx[c] == '+' && xx[c + 2] == '*')
					{
						skob = skob + (((int)xx[c + 1]-48) * ((int)xx[c + 3]-48));
						c += 3;
					}
					if (xx[c] == '*')
					{
						skob = skob + (((int)xx[c - 1]-48) * ((int)xx[c + 1]-48));
					}
					c++;
				}
				ot *= skob;
			}
			if (xx[c] == '*' && xx[c + 1] != '(')
			{
				ot *= ((int)xx[c + 1]-48);
			}
			c++;
		}
	}
	otvet = ot;
}

int ravno::otvet = ot;