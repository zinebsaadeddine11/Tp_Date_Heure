#pragma once
#include<iostream>
using namespace std;
namespace Horaire {
	class Heure
	{
	protected:
		int heure;
		int min;
		int sec;
	public:
		Heure();
		Heure(int, int, int);
		void afficher() const;
		bool operator>(const Heure&) const;
		~Heure();
	};
}
