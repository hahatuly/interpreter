#include <iostream>
#include <stdio.h>
#include <string>

#include "inykcia.h"
#include "pobochki.h"
#include "diagnoz.h"
#include "kurs.h"
#include "ravno.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int start = 0; //индикатор начала написания
	int startif = 0;
	int startwhile = 0;
	int k = 0; //количество операторов <<>>
	string sint[100];
	int ikon = 0;

	int j = 0;
	while (ikon==0) //ввод
	{
		cin >> sint[j];

		if (sint[j].find("<<") == -1 && start==0) //проверка нет ли до начала программы текста
		{
			cout << "в " << j + 1 << " строчке неизвестный символ " << endl;
		}
		if (sint[j].find("<<") != -1) //подсчет количества открывающегося оператора
		{
					k++;
					start = 1;
		}
		if (sint[j].find(">>") != -1 && start==1) //подсчет количества закрывающихся операторов
		{
			k--;
		}
		if (k==0 && start==1)
		{ 
			ikon = j;
			break; 
		}
		j++;
	}


	int i = 0;
	while (i<ikon) //анализ
	{
		if (sint[i].find("inykcia") != -1)
		{
			int ik = i;
			string x = sint[i];
			inykcia in;
			in.vvod(x, ik);
		} 
		else if (sint[i].find("pobochki") != -1)
		{
			int ik = i;
			string x = sint[i];
			pobochki out;
			out.vivod(x, ik);
		}
		else if (sint[i].find("diagnoz") != -1)
		{
			if (startif == 0)
			{
				startif = 1;
			}
		}
		else if (sint[i].find("kurs") != -1)
		{
			if (startwhile == 0)
			{
				startwhile = 1;
			}
		}
		else if (sint[i].find("<=!") != -1)
		{
			int ik = i;
			string x = sint[i];
			ravno pr;
			pr.virag(x, ik);
		}
		else if (sint[i].find("<<") != -1 || sint[i].find(">>") != -1)
		{ }
		else
		{
			cout << "в " << i + 1 << " строчке неизвестный символ " << endl;
		}



		if (startif == 1)
		{
			int ik = i;
			string x = sint[i];
			diagnoz ifi;
			ifi.esli(x, ik);
		}
		if (startif == 1 && sint[i].find(">>") != -1)
		{
			startif = 0;
		}


		if (startwhile == 1)
		{
			int ik = i;
			string x = sint[i];
			kurs wh;
			wh.poka(x, ik);
		}
		if (startwhile == 1 && sint[i].find(">>") != -1)
		{
			startwhile = 0;
		}


		i++;
	}

	return 0;
}