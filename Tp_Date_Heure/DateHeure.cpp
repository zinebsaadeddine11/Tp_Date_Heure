#include "DateHeure.h"
Horaire::DateHeure::DateHeure(int h, int m, int s, int j, int mo, int a):Heure(h,m,s)
{
	int joursMax[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

	// Vérifier si année bissextile
	if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
		joursMax[2] = 29;

	if (mo >= 1 && mo <= 12) this->mois = mo; else this->mois = 1;

	// Vérifier et assigner jour selon mois
	if (j >= 1 && j <= joursMax[this->mois])
	{
		this->jour = j;
	}
	else {
		this->jour = 1;
	}
	if (a >= 0) this->annee = a; else this->annee = 2000;
}
void Horaire::DateHeure::afficher() const
{
	cout << this->jour << "/" << this->mois << "/" << this->annee << endl;
	cout << "L'heure correspondante :";
	Heure::afficher();
	cout << endl;
}
bool Horaire::DateHeure::operator>(const DateHeure& d) const
{
	if (this->annee != d.annee) return this->annee > d.annee;
	if (this->mois != d.mois) return this->mois > d.mois;
	if (this->jour != d.jour) return this->jour > d.jour;
	 //si egaux
	return Heure::operator>(d);
}
Horaire::DateHeure::~DateHeure()
{
	cout << "Call for Date Destructor" << endl;
}
