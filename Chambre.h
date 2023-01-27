#pragma once
#include <string>
#include <iostream>
using namespace std;

class Chambre
{
private :
	int Numero = 0;
	string Type;
	int Prix = 0;
	bool Occupe = false;
public :
	Chambre();
	Chambre(int Numero, string Type, int Prix, bool occupe);
	friend std::ostream& operator<<(std::ostream& os, const Chambre& ChambreCrea);
	void getChambre();
	int getNumero();
	string getType();
	int getPrix();
	bool getOccupe();
	int setPrixChambre();
	void setOccupe(bool Occupe);
};

