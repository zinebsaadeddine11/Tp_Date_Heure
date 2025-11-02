// Tp_Date_Heure.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "Heure.h"
#include "DateHeure.h"
using namespace Horaire;
int main()
{
    Heure h1(12, 30, 45);
    Heure h2(12, 30, 40);
    h1.afficher();
    h2.afficher();
    cout << "***** Comparaison des Heures *****" << endl;
    cout << (h1 > h2 ? " h1 Plus Tardive que h2" : "h2 Plus tardive que h1") << endl;
    cout << "\n";
    DateHeure *d1=new DateHeure(14, 30, 10, 12, 12, 2025);
    DateHeure *d2 = new DateHeure(17, 50, 59, 1, 2, 2025);
    d1->afficher();
    d2->afficher();
    cout << "***** Comparaison des Dates *****" << endl;
    cout << ((*d1) > (*d2) ? " d1 Plus Tardive que d2" : "d2 Plus tardive que d1") << endl;
    cout << "\n\n";

    delete d1, d2;

}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
