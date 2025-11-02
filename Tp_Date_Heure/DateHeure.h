#pragma once
#include"Heure.h"
#include<iostream>
using namespace std;
namespace Horaire {
	class DateHeure : public Heure
	{
	private:
		int jour;
		int mois;
		int annee;
	public:
		DateHeure(int, int, int, int, int, int);
		void afficher() const;
		bool operator>(const DateHeure&) const;
		~DateHeure();
	};
}
