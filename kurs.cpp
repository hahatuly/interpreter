#include "kurs.h"
#include "diagnoz.h"
#include "inykcia.h"
#include "pobochki.h"
#include "ravno.h"


void kurs::poka(string xx, int ik)
{
	int n = xx.length();
	if (xx[0] == 'k' && xx[1] == 'u' && xx[2] == 'r' && xx[3] == 's' && xx[4] == '(' && (xx[6] == '>' || xx[6] == '<' || xx[6] == '=' || xx[6] == '#') && xx[n - 1] == ')')
	{
	}
	else if (xx.find("<<") != -1)
	{
	}
	else if (xx.find(">>") != -1)
	{
	}
	else if (xx.find("inykcia") != -1)
	{
		int ikk = ik;
		string x = xx;
		inykcia in;
		in.vvod(x, ikk);
	}
	else if (xx.find("pobochki") != -1)
	{
		int ikk = ik;
		string x = xx;
		pobochki out;
		out.vivod(x, ikk);
	}
	else if (xx.find("diagnoz") != -1)
	{
		if (startrek != 1)
		{
			startrek = 1;
		}
	}
	else if (xx.find("<=!") != -1)
	{
		int ikk = ik;
		string x = xx;
		ravno pr;
		pr.virag(x, ik);
	}
	else
	{
		cout << "в " << ik + 1 << " строчке неизвестный символ " << endl;
	}





	if (startrek == 1)
	{
		int ikk = ik;
		string xxx = xx;
		diagnoz iffi;
		iffi.esli(xxx, ik);
	}
	if (startrek == 1 && xx.find(">>") != -1)
	{
		startrek = 0;
	}


}