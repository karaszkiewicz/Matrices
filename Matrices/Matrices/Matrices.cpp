#include "pch.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int rx, ry, l;

int **dodaj(int **m1, int **m2)
{
	int **wynik = new int *[rx]; //alokacja pamieci
	for (int i = 0; i < rx; ++i)
	{
		wynik[i] = new int[ry]; //alokacja pamieci
		for (int j = 0; j < ry; ++j)
			wynik[i][j] = m1[i][j] + m2[i][j];
	}
	return wynik;
}


int main()
{
	cout << "Podaj rozmiar tablicy" << endl;
	cin >> rx >> ry;

	cout << "Wypelnij maczierz m1" << endl;
	int **m1 = new int *[rx]; //alokacja pamieci
	for (int i = 0; i < rx; ++i)
	{
		m1[i] = new int[ry]; //alokacja pamieci
		for (int j = 0; j < ry; ++j) //wpisanie wartosci do tablicy
			cin >> m1[i][j];
	}
	//wypisz m1[rx][ry]
	for (int i = 0; i < rx; ++i, cout << endl)
		for (int j = 0; j < ry; ++j)
			cout << m1[i][j] << '\t';

	cout << "Wypelnij maczierz m2" << endl;
	int **m2 = new int *[rx]; //alokacja pamieci
	for (int i = 0; i < rx; ++i)
	{
		m2[i] = new int[ry]; //alokacja pamieci
		for (int j = 0; j < ry; ++j) //wpisanie wartosci do tablicy
			cin >> m2[i][j];
	}
	//wypisz m2[rx][ry]
	for (int i = 0; i < rx; ++i, cout << endl)
		for (int j = 0; j < ry; ++j)
			cout << m2[i][j] << '\t';

	cout << endl << "Wynikiem dodawania podanych macierzy jest macierz:" << endl;
	int **m3 = dodaj(m1, m2);
	for (int i = 0; i < rx; ++i, cout << endl)
		for (int j = 0; j < ry; ++j)
			cout << m3[i][j] << '\t';

	//zniszcz m1
	for (int i(0); i < rx; ++i)
		delete[] m1[i]; //uwolnienie pamieci
	delete[] m1; //uwolnienie pamieci

	//zniszcz m2
	for (int i(0); i < rx; ++i)
		delete[] m2[i]; //uwolnienie pamieci
	delete[] m2; //uwolnienie pamieci

	//zniszcz m3
	for (int i(0); i < rx; ++i)
		delete[] m3[i]; //uwolnienie pamieci
	delete[] m3; //uwolnienie pamieci

	return 0;

}
