#include "Heure.h"

Horaire::Heure::Heure():heure(0),min(0),sec(0)
{
}

Horaire::Heure::Heure(int h, int m, int s)
{
	if (h >= 0 && h < 24) this->heure = h; else this->heure = 0;
	if (m >= 0 && m < 60) this->min = m; else this->min = 0;
	if (s >= 0 && s < 60) this->sec = s; else this->sec = 0;
}

void Horaire:: Heure::afficher() const
{
	cout << this->heure << "h:" << this->min << "m:" << this->sec << "s." << endl;
}

bool Horaire:: Heure::operator>(const Heure& h) const
{
	if (this->heure !=h.heure)
	{
		return this->heure > h.heure;
	}
	else
	{
		if (this->min != h.min)
		{
			return this->min > h.min;
		}
		else
		{
			if (this->sec != h.sec)
			{
				return this->sec > h.sec;
			}
		}
	}
}

Horaire::Heure::~Heure()
{
	cout << "Call for Heure Destructor" << endl;
}
