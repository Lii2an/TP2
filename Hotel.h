#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Chambre.h"
using namespace std;
class Hotel
{
private:
	string Identifiant;
	string Nom;
	string Ville;
	std::vector<Chambre> chambre;
	int Num = 0;
public:
	int NombreChambre;
	Hotel();
	Hotel(string Identifiant, string Nom, string Ville);
	std::vector<bool> NumChambre;
	//std::vector<int> NumChambre{ 1,2,3,4,5,6,7,8,9,10 };
	friend std::ostream& operator<<(std::ostream& os, const Hotel& HotelCrea);
	void SupprimerChambre();
	void AjouterChambre(const Chambre& Chambre);
	void AfficherChambre();
	void AjouterChambre();
	void AfficherHotel();
		
};

