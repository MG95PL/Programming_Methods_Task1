// ZAd1.cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct student
{
	string imie, nazwisko;
	int numer;

	string& im() { return imie; }
	string& naz() { return nazwisko; }
	int& num() { return numer; }
	
};



int main()
{
	
	ifstream odczyt("text.txt");
	if (!odczyt) throw string("Brak pliku do odczytu");
	int n;
	odczyt >> n;

	student* tab = new student[n];

	for (int i = 0; i < 6; ++i) {
		odczyt >> tab[i].im();
		odczyt >> tab[i].naz();
		odczyt >> tab[i].num();
	}


	cout << tab[0].im() << '\t' << tab[0].naz() << '\t' << tab[0].num() << endl << endl;

	for (int i = 0; i < 6; ++i) {
		cout << tab[i].im() << '\t' << tab[i].naz() << '\t' << tab[i].num() << endl;	
	}

	
	cout << "wprowadz dane osoby nr 3" << endl;
	cin >> tab[2].im() >> tab[2].naz() >> tab[2].num();


	ofstream zapis("text.txt");
	if (!zapis) throw string("Brak pliku do zapisania");
	for (int i = 0; i < 6; ++i) {
		zapis << tab[i].im() << '\t';
		zapis << tab[i].naz() << '\t';
		zapis << tab[i].num() << endl;
	}



	system("pause"); 
    return 0;
}


