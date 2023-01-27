#include "Hotel.h"
#include <string>
#include <iostream>
#include <vector>
#include "Chambre.h"
using namespace std;
void display(vector<Chambre>& v);

Hotel::Hotel()
{
}

Hotel::Hotel(string IdentifiantHotel, string NomHotel, string VilleHotel)
{
	Identifiant = IdentifiantHotel;
	Nom = NomHotel;
	Ville = VilleHotel;
	NombreChambre = chambre.size();
}

void Hotel::SupprimerChambre()
{
	cout << "choisissez le numero de chambre à effacer" << endl;
	cin >> Num;
	chambre.erase(chambre.begin() + Num);
	cout << "chambre " << Num << "efface"<< endl;
}

void Hotel::AjouterChambre(const Chambre& Chambres)
{
	chambre.push_back(Chambres);
}
void Hotel::AjouterChambre() {
	int num = 0;
	int prix = 0;
	string type;
	bool Occupe = false;
	cout << "choisissez le numéro de la chambre :" << endl;
	cin >> num;
	cout << "choisissez le type de la chambre :" << endl;
	cin >> type;
	cout << "choisissez le prix de la chambre" << endl;
	cin >> prix;
	Chambre maChambre(num, type, prix, Occupe);
	AjouterChambre(maChambre);
}

void Hotel::AfficherChambre()
{
	display(chambre);
}



void Hotel::AfficherHotel()
{
	cout << "Hotel Numero : " << Identifiant << endl;
	cout << "Nom :" << Nom << endl;
	cout << "Chambre : " << endl;
	display(chambre);
}


std::ostream& operator<<(std::ostream& os, const Hotel& HotelCrea)
{
	os << "Identifiant de l'hotel : " << HotelCrea.Identifiant << "\n" << "Nom de l'hotel : " << HotelCrea.Nom << "\n" << "Ville : " << HotelCrea.Ville << "\n" <<endl;
	
	return os;
}

void display(vector<Chambre>& v)
{

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
	cout << "\n" << endl;
}