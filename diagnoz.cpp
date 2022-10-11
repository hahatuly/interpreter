#include "diagnoz.h"
#include "inykcia.h"
#include "pobochki.h"
#include "kurs.h"
#include "ravno.h"


void diagnoz::esli(string xx, int ik)  
{
	yes = 0;
	int n = xx.length();
	if (xx[0] == 'd' && xx[1] == 'i' && xx[2] == 'a' && xx[3] == 'g' && xx[4] == 'n' && xx[5] == 'o' && xx[6] == 'z' && xx[7] == '(' && (xx[9]=='>' || xx[9] == '<' || xx[9] == '=' || xx[9] == '#') && xx[n - 1] == ')')
	{
			if (xx[9] == '>')
			{
				if (ravno::otvet > ((int)xx[10] - 48))
				{
					yes = 1;
				}
			}
			else if (xx[9] == '<')
			{
				if (ravno::otvet < ((int)xx[10] - 48))
				{
					yes = 1;
				}
			}
			else if (xx[9] == '=')
			{
				if (ravno::otvet == ((int)xx[10] - 48))
				{
					yes = 1;
				}
			}
			else if (xx[9] == '#')
			{
				if (ravno::otvet != ((int)xx[10] - 48))
				{
					yes = 1;
				}
			}
	}
	else if (xx.find("<<") != -1 && yes==1)
	{
	}
	else if (xx.find(">>") != -1 && yes == 1)
	{
	}
	else if (xx.find("inykcia") != -1 && yes == 1)
	{
		int ikk = ik;
		string x = xx;
		inykcia in;
		in.vvod(x, ikk);
	}
	else if (xx.find("pobochki") != -1 && yes == 1)
	{
		int ikk = ik;
		string x = xx;
		pobochki out;
		out.vivod(x, ikk);
	}
	else if (xx.find("kurs") != -1 && yes == 1)
	{
		if (startrek != 1)
		{
			startrek = 1;
		}
	}
	else if (xx.find("<=!") != -1 && yes == 1)
	{
		int ikk = ik;
		string x = xx;
		ravno pr;
		pr.virag(x, ik);
	}
	else if (yes == 1)
	{
		cout << "в " << ik + 1 << " строчке неизвестный символ " << endl;
	}
	
	
	

	
	if (startrek == 1)
	{
		int ikk = ik;
		string xxx = xx;
		kurs iffi;
		iffi.poka(xxx, ik);
	}
	if (startrek == 1 && xx.find(">>") != -1)
	{
		startrek = 0;
	}


}
